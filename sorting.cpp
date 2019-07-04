#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int numofswaps=0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    }
    // Write Your Code Here
    for(int i=0;i<n;i++){
    	 for(int j = 0; j < n-1; j++) {
    	    
    	    if(arr[j]>arr[j+1]) {
    	    	swap(arr[j],arr[j+1]);
    	    	numofswaps +=1;
    	    }

    	    if(numofswaps==0){
    	    	break;
    	    }

    }

    }
   

    cout<<"Array is sorted in "<<numofswaps<<" swaps."<<"\n";
    cout<<"First Element: "<<arr[0]<<"\n";
    cout<<"Last Element: "<<arr[n-1]<<"\n";
   
    
    return 0;
}

