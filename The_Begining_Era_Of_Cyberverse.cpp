#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int solve() {
    int n, k;
    cin>>n>>k;
    return floor(k/n);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        cout << solve() << endl;
    }
 

    return 0;
}