/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++)
#define reps(i,n) for(int i=0; i<(n- 1); i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+3];
    rep(i,n) cin >> arr[i];

    int k=0;
    sort(arr, arr+n);
    reps(i,n) {
        if(arr[i]!=arr[i+1] and arr[i]!=0) {
            k++;
        }
    }
    if(arr[n-1]!=0) {
        k++;
    }
    cout <<k <<endl;
     
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl "\n"
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++)
#define reps(i,n) for(int i=0; i<(n- 1); i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,k,i,j;
    set<ll> s;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin>>j;
        if(j!=0) {
            s.insert(j);
        }
    }
     
     cout << s.size() << endl;
     
    return 0;
}