#include<bits/stdc++.h>
using namespace std;
 
 int factorial(int n)
 {
 	int result;
 	if(n==0 || n==1)
 	{
 		return 1;
 		
 	}else
 	{
 		return(n*factorial(n-1));
 	}
 }
 int main()
 {
 	int n;
 	cin>>n;
 	cout<<factorial(n);
 	return 0;
 }