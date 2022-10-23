
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, a, b; 
    cin>>t;
    while(t--) {
        cin >> a >> b;
        if(a+b < 3) {
            cout << 1 << endl;
        }
        else if(a+b <= 10) {
            cout << 2<< endl;
        }
        else if(a+b <= 60) {
            cout << 3 << endl;
        }
        else if(60 < a+b) {
            cout << 4 << endl;
        }
    }


    return 0;
}

/* 1)  Bullet if a+b<3

2) Blitz if 3≤a+b≤10
3) Rapid if 11≤a+b≤60

4) Classical if 60<a+b */