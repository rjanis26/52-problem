#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while(t--) {
        cin>>n;
        int arr[n];
        int ans = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            ans += arr[i]-1;
        }

        if(ans%2==1) {
            cout << "errorgorn" << endl;
        }
        else {
            cout << "maomao90" << endl;
        }
        }
    return 0;
}