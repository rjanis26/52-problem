#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   // using for input and output faster...
    cin.tie(0);
    cout.tie(0);

    int t, arr[7];
    cin >> t;
    
    while(t--) {
        int sun_days = 0, rain_day = 0;
        for(int i = 0; i < 7; i++) {
            cin >> arr[i];
            if(arr[i] == 1) {
                sun_days++;
            }
            else if(arr[i] == 0) {
                rain_day++;
            }
        }
        if(sun_days > rain_day) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }

    }

    return 0;
}