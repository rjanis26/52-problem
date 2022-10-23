#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int length, court;
    cin >>length>> court;

    int ans = 2*court;

    if(length > ans) {
        cout << length-ans << endl;
    }
    else {
        cout << 0 << endl;
    }


    return 0;
}