#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve() {
    int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>> arr[i];
        }

        int ans=0;
        for(int i=0; i<n; i++) {
            if(arr[i] != arr[i+1]) {
                ans++;
            }
              
        }
        cout<< ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
   
    while(t--) {
        solve();
    }   
    return 0;
}