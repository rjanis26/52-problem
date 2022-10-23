#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define is ios_base::sync_with_stdio(false);
#define ll long long int
int main()
{
    is;
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;cin >>t;
    for(int i=0; i<t; i++) {
        ll n, m, a, b; 
        cin>>n>>m>>a>>b; 
        cout << floor_sum(n,m, a, b) << endl;

    }




    return 0;
}