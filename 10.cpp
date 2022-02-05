#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[4];
	
	for(int i=0;i<4;i++)
	{
		
		arr[i]=n%2;
		n=n/2;
		if(n!=0)
		 {
           arr[i]=n%2;
		 }
	     
	}
		cout<<arr[1];
     

	// while(n>0)
	// {
	// 	int rem=n%2;

	// 	if(rem==1)
	// 	{
	// 		count++;
	// 		if(count>max)
	// 		{
	// 			max=count;
	// 		}
	// 	}else
	// 	{
	// 		count=0;
	// 	}
	// 	n=n/2;
	// }
	// cout<<max;

	return 0;
}