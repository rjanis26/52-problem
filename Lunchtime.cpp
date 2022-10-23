#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;

        if(n <= 1 || n <= 4)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}