#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x, y, d;
    cin >> t;
    
    while(t--) {
        cin >> x >> y >> d;
        int val = abs(x - y);
        if(val <= d) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }


    return 0;
}