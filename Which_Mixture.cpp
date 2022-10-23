#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x, y;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if(x > 0 and y > 0) 
            cout << "Solution" << '\n';
        else if(y == 0) 
            cout << "Solid" << '\n';
        else 
            cout << "Liquid" << '\n';
    }



    return 0;
}



/* A solution if A>0 and B>0,

2) A solid if B=0, or

3) A liquid if A=0. */