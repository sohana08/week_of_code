#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
   // cout<<n;
	for(int j=n-1;j>=0;j--)
	{
		cout<<arr[j]<<" " ;
	}
	return 0;
}