#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%2==0)
	{
	   if(n>=6 && n<=20){
		   cout<<"weird";
	     }
	     else if(n>=2 && n<=5){
	     	cout<<"not weird";
	     }
	     else
	     	if(n>20){
	     		cout<<"not weird";
	     	}
	}
	else
		{
		cout<<"weird";
	  }
	
	return 0;
}