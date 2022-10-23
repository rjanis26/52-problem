#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int arr1[n], arr2[n];
	    int sum1 = 0, sum2 = 0;
	    for(int i = 0; i < n; i++){
	        cin >> arr1[i];
	        sum1 += arr1[i];
	    }
	    for(int i = 0; i < n; i++){
	        cin >> arr2[i];
	        sum2 += arr2[i];
	    }
	    sort(arr1, arr1 + n);
	    sort(arr2, arr2 + n);
	    if(sum1 - arr1[n-1] < sum2 - arr2[n-1]){
	        cout << "Alice" << endl;
	    }
	    else if(sum1 - arr1[n-1] > sum2 - arr2[n-1]){
	        cout << "Bob" << endl;
	    }
	    else{
	        cout << "Draw" << endl;
	    }
	}
    

    return 0;
}