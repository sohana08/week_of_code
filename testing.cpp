// This problem is all about unit testing.
// For a given array of n integers, the function returns the index of the element with the minimum value in the array.
// If there is more than one element with the minimum value, the returned index should be the smallest one.
// If an empty array is passed to the function, it should raise an Exception.
// Note: The arrays are indexed from 0.

//A colleague has written that function, and your task is to design 3  separated unit tests, testing if the function behaves correctly. 
//The implementation in Python is listed below (Implementations in other languages can be found in the code template):

// def minimum_index(seq):
//     if len(seq) == 0:
//         raise ValueError("Cannot get the minimum value index from an empty sequence")
//     min_idx = 0
//     for i in range(1, len(seq)):
//         if a[i] < a[min_idx]:
//             min_idx = i
//     return min_idx

#include <bits/stdc++.h>
using namespace std;


int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        //return an empty array
        vector<int> arr { };
        return arr;

    }

};

class TestDataUniqueValues {

public:
    static vector<int> get_array() {
        // complete this function
        //return an array with size atleast 2 and unique elements
    		vector<int> arr {1,2,3,4,5};
    		return arr;

    }

    static int get_expected_result() {
        // complete this function
        //return the expected minimum value index for this array.
        return 0;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
        //return an array where there are exactly two different minimum values
        std::vector<int> arr {1,3,1};
        return arr;
    }

    static int get_expected_result() {
        // complete this function
        //return the expected minimum value index for this array.
        return 0;
    }

};


void TestWithEmptyArray() {
    try {
        auto seq = TestDataEmptyArray::get_array();
        auto result = minimum_index(seq);
    } catch (invalid_argument& e) {
        return;
    }
    assert(false);
}

void TestWithUniqueValues() {
    auto seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);

    assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

    auto expected_result = TestDataUniqueValues::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums() {
    auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
    assert(seq.size() >= 2);

    auto tmp = seq;
    sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

    auto expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

int main() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK" << endl;
    return 0;
}
