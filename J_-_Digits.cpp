#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);      

    int abc, sum, c, a, b, x;
    cin>>abc;
    
    c = abc % 10;
    x = abc/10;
    b = x%10;
    a = x/10;
    
    if(a!=0 and b!=0 and c!=0) {
        sum = abc + (b*100+c*10+a) +(c*100+a*10+b);
    }

    cout << sum << endl;

    return 0;
}