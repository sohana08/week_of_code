#include <bits/stdc++.h> 
using namespace std;

void solution(int A, int B) {
	string str;
	char c= 'a';
	char d = 'b';

	while(0<A || 0<B) {
		if(A>B){
			if(0<A--)
				str.push_back(c);
			if(0<A--)
				str.push_back(c);
			if(0<A--)
				str.push_back(c);
			// if(0<A--)
			// 	str.push_back(d);
		} else if(B>A) {
			if(0<B--)
				str.push_back(d);
			if(0<B--)
				str.push_back(d);
			if(0<B--)
				str.push_back(d);
			// if(0<B--)
			// 	str.push_back(c);

		} else {
			if(0<A--)
				str.push_back(c);
			if(0<B--)
				str.push_back(d);
		}
	}
	cout<<str;
}	
 int main() {
 	solution(3,5);

 	
 	return 0;
 }