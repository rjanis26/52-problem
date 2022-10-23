/* #include<bits/stdc++.h> 
using namespace std;
#define endl "\n"

int solve(int d, int n) {
    int sum=0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    d--;
    if(d>0) {
        return solve(d, sum);
    }
    else {
        return sum;
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,d, t, ans;
    cin>>t;
    
    while(t--) {
        cin>>d>>n;
        ans= solve(d,n);
        cout << ans << endl;
    }
    
    return 0;
} */

#include<bits\stdc++.h>
using namespace std;
#define endl "\n"

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}