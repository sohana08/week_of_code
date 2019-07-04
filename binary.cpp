#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
    int max=0;
    int count = 0;
    while (n>0) {
    	int rem = n%2;
    	if(rem ==1){
    		count ++;
    		if(count>max){
    			max=count;
    		}else {
    			count=0;
    		}
    		n=n/2;
    	}
	cout<<max;
    }
	
	return 0;
}