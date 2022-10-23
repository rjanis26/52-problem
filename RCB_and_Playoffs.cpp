/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, points, earn, left;
    cin>>t;
    while(t--) {
        cin >> points>> earn>> left;
        int val = (earn - points);

        if(val > 2*left) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
    


    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // use for input and output faster
    cin.tie(0);
    cout.tie(0);

    int t, x, y, z;
    while(t--) {
        cin >> x >>y >> z;
        x += z*2;

        if(x > y || x==y) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }


    return 0;
}
