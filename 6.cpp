#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	// cout<<s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int j=0;j<s.length();j++)
		{
			if(j%2==0)
			{
				cout<<s[j];
			}
		}
		cout<<" ";
			for(int j=0;j<s.length();j++)
			{
				if(j%2!=0)
				{
					cout<<s[j];
				}
			}
}

	return 0;
}