#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    string str;
    cin >> str;
    int count = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '4') {
            count++;
        }
    }
    cout << count << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    cout << '\n';

    return 0;
}