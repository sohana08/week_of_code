#include <bits/stdc++.h>
using namespace std;

bool primeorNot(int n ) {
	int flag=0;
	if (n<=1){
		return false;
	} 

	for(int i=2; i<=n; i++) {
		if(n%i == 0) {
			flag++;
			}
		}

		if(flag>1){
			return false;
		}else {
			return true;
		}
}


int main() {
	int T;
	cin>>T;
	int n[T];
	
	 bool isPrime;

	 for(int i = 0; i<T; i++){
	 	cin>>n[i];
	 	 isPrime = primeorNot(n[i]);
	 	if(isPrime) {
	 		cout<<"yes prime";
	 	} else {
	 		cout<<"not prime";
	 	}
	 }

	 return 0;
}




// #include <bits/stdc++.h>

// using namespace std;

// bool isPrime(int n) {
//     for (int i = 2; i <= sqrt(n); i++)
//         if (n % i == 0) return false;
//     return true;
// }

// int main() {
//     int T;
//     cin >> T;

//     for (int i = 0; i < T; i++) {
//         int n;
//         cin >> n;

//         if (n >= 2 && isPrime(n)) cout << "Prime" << endl;
//         else cout << "Not prime" << endl;
//     }
// }
