#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin>>n;
        int b = floor(n/2)-1;
        int ans = b*(b+1)/2;
        cout <<ans << endl;
    }



    return 0;
}