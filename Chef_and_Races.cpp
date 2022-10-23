#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x, y, a, b; 
    cin>>t;
    while(t--) {
        cin>>x>>y>>a>> b; 
        int val = 2 -((x ==a or x== b) + (y ==a or y==b));
        cout << val << endl;
    }


    return 0;
}