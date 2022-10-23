#include<bits/stdc++.h>
 #define endl "\n"
using namespace std;

 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;

        int a= 500-x*2 + 1000-4*(x+y);
        int b= 500-2*(x+y) + 1000-4*y;

        cout << max(a, b)<< endl;
         
    }   
    return 0;
}