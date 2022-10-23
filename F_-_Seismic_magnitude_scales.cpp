#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x = 32, ans;

    int a, b, p;
    cin >> a>> b; 
    int diff = a-b;
    if(a==b) {
        cout << 1 << endl;
    }
    else {
        for(int i=1; i<= diff; i++) {
        ans=pow(x, diff);
    }  
    cout << ans << endl;
    }
    return 0;
}