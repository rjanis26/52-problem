#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, x, y, z;
    cin>> T;

    while(T--) {
        cin >> x >> y >> z;
        //int val = max(0, z - (y/x));
        int val = (z - y/x);
        if(val <= 0) 
            cout << "0" << "\n";
        else 
            cout << val << "\n";
    }



    return 0;
}