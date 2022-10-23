#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x, y;
    cin >> t;

    while(t--) {
        cin >> x>> y;
        int ans = (2*x - y+1);
        cout<< ans << '\n';
    }
    return 0;
}