#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b; 
    cin>>a>>b; 
    double x, y;
    cin>>x >>y;

    cout << a+b << " " << a-b << endl;
    cout<< fixed << setprecision(1)<<x+y << " " << x-y << endl;


    return 0;
}