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
        if(y%x==0) {
            cout<< y/x -1 << endl;
        }
        else{
            cout << y/x << endl;
        }
    }
    

    return 0;
}