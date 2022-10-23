#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, y, max = 0;
    cin >> x>> y;
    int sum, sub, mul;
    sum = x+y; // a
    sub = x-y; // b
    mul = x*y; // c

    if(sum >= sub and sum >= mul)
        cout << sum << endl;
    else if(sub >= sum and sub >= mul) 
        cout << sub << endl;
    else if(mul >= sum and mul >= sub)
        cout << mul << endl;


    return 0;
}