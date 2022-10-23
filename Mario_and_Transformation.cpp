#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, x, value;
    cin >> T;

    while(T--) {
        cin >> x;
        value = x % 3;

        if(value == 0) 
            cout<< "NORMAL\n";
        else if(value == 2) 
            cout << "SMALL\n";
        else
            cout << "HUGE\n";
    }

    return 0;
}