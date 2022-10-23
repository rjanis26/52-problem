#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a>> b; 
    if(b>=a) {
        cout << "No" << endl;
    }
    else {
        if(a*6>= b) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}