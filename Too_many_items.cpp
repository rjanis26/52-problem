#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x;
    cin>>t;
    while(t--) {
        cin >> x;
        // if(x % 10 == 0) {
        //     cout << x/10 << "\n";
        // }
        // else {
        //     cout << (x/10) +1 << endl;
        // }

        cout << (x%10 ==0 ? x/10 : (x/10)+1) << endl;
    }



    return 0;
}