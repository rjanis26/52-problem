/* #include<bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin >> N;
    vector<int> sub_time(N);
    vector<int> jug_time(N);

    int ans=0;
    for(int i=0; i<N; i++) {
        cin >> sub_time[i] >> jug_time[i];
    }

    for(int i=0; i<N; i++) {
        if(jug_time[i] - sub_time[i] > 5) 
        ans++;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >>t;

    while(t--) {
        solve();
    }

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

void solve() {
    int N;  cin >> N;   

    int arr[N];
    int arr2[N];
    int ans = 0;
    for(int i=0; i<N; i++) {
        cin >> arr[i] >> arr2[i];
    }

    for(int i=0; i<N; i++) {
        if(arr2[i] - arr[i] > 5) {
            ans++;
        }
    }
    cout << ans  << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }


    return 0;
}