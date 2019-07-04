#include <bits/stdc++.h>
using namespace std;

void solution (string str) {

		int count = 1;
		for(int i=0; i<str.length()-1; i++) {
		if(str[i]>66 && str[i]<91){
			count +=1;
		}
		
	}

   cout<<count;
	}

int main() {
	string str = "myNameIs";
	solution(str);

	return 0;
	
}