#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    string name;
    map<string,int>phonebook;
    for(int i=0;i<n;i++)
    {
    	cin>>name;
    	cin>>num;
    	phonebook[name]=num;

    }

	for(int j=0;j<n;j++)
	{
		cin>>name;
		if(phonebook.find(name)!=phonebook.end())
		{
			cout<<name<<"="<<phonebook.find(name)->second<<endl;
		}else
		{
			cout<<"not found";
		}
	}    
	return 0;
}