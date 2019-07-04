#include <bits/stdc++.h>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code herea
  	public: Difference(vector<int>arr) {
  		elements= arr;
  		maximumDifference=0;

  	}

  	void computeDifference() {
  		
	    int difference;
  		for(int i=0; i<elements.size()-1; i++) {
  			for(int j=0; j<elements.size()-1;j++) {
  				difference= abs(elements[i] - elements[j+1]);
  				
  					if(difference>maximumDifference) {
  						maximumDifference = difference;
  			           }
  			
  			}
  		}
  		cout<<maximumDifference;
  	}

}; // End of Difference class

int main() {
	int N;
	vector<int> arr;
	cin>>N;
	for(int i=0;i<N;i++){
		int ar;
		cin>>ar;
		arr.push_back(ar);
	}
   
    Difference* d = new Difference(arr);
    d->computeDifference();

    return 0;
}
