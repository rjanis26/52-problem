#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int police_loc, theif_loc;
        cin >> police_loc >> theif_loc;

        cout << abs(police_loc - theif_loc) << "\n";


    }


    return 0;
}