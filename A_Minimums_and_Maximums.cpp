#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(c>= a) {
            if(b>=c) {
                cout<<c << endl;
            }
            else {
                cout << c+a << endl;
            }
        }
        else {
            if(d>=a) {
                cout << a <<endl;
            }
            else {
                cout<< a+c << endl;
            }
        }
    }


    return 0;
}