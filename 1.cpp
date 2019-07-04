#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i=4;
	double d=4.0;
	string s="Hackerrank";

	int i1;
	double d2;
	string s2;
	cin>>i1;
	cin>>d2;
	cin>>s2;
   
   int sum1;
   double sum2;
   string sum3;

   sum1=i+i1;
   sum2=d+d2;
   sum3=s +" " +s2;

   cout<<sum1<<endl;
   cout<<fixed<<setprecision(1)<<sum2<<endl;
   cout<<sum3;

   return 0;

}