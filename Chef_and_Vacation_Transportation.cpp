#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,x,y,z;
    cin>>t;
    while(t--) {
        cin >> x>>y >>z;

        if(x +y > z) {
            cout << "TRAIN" << '\n';
        }
        else if(x+y== z) {
            cout << "EQUAL" << '\n';
        }
        else {
            cout << "PLANEBUS" << '\n';
        }
    }



    return 0;
}
