#include <bits/stdc++.h>

using namespace std;

class Solution {
    //Write your code here
    stack<char> stk;
    queue<char> que;
    char ch;
    
public:
    void pushCharacter(char ch){
        stk.push(ch);
    }

    char popCharacter() {
        ch=stk.top();
        stk.pop();
        return ch;
    }

    void enqueueCharacter(char ch) {
        que.push(ch);
    }

    char dequeueCharacter() {
        ch = que.front();
        que.pop();
        return ch;
    }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
