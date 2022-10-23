#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, ep_time, num_ep, ex_time;
    cin>>t;

    while(t--) {
        cin >> ex_time >> num_ep >> ep_time;
        if(ep_time*num_ep >= ex_time) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }



    return 0;
}