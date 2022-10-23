#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x = 0;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        char a, b,c; 
        cin >> a >> b >> c; 
        if(b == '+')    x++;
        else if(b == '-')   x--;
    }


    cout << x << endl;

    return 0;
}