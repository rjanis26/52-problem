#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x, rem;
    cin >> n >> x;

    for(int i = 1; i <=x; i++) {
        rem = n % 10;
        if(rem == 0) {
            n/=10;
        }
        else {
            n -= 1;
        }
    }
    cout << n << endl;

    return 0;
}