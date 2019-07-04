#include <bits/stdc++.h>
using namespace std;

int main() {
	int fine;
	int dd, mm, yy;
	int d, m, y;
	cin>>dd>>mm>>yy;
	cin>>d>>m>>y;
	int numofdays = dd-d;
	int numofmonth = mm-m;
	int numofyear = yy-y;

	

	if(numofyear>0){
		fine = 1000;

	} else if(numofmonth>0 && numofyear==0) {
		fine=500 * numofmonth;
	} else if(numofdays>0 && numofyear==0 ) {
		fine= 15 * numofdays;
	} else{
		fine=0;
	}

	cout<<fine;

	return 0;
}