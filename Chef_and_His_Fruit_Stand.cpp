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
        cin >> x >> y;
        //cout << min(x/2, y) << '\n';
        if(x/2 <= y) {
            cout << x/2 << '\n';
        }
        else {
            cout << y  << '\n';
        }
    
    }

    return 0;
}