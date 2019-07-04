#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int answer;
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		
		answer=n * i;
		cout<<n<<" "<<"x"<<" "<<i<<"="<<answer<<endl;
	}
	return 0;
}