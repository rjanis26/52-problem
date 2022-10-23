#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int a, b;
        cin >> a >> b; 

        double Cmin = sqrt(b*b - a*a);
        double Cmax = sqrt(a*a + b*b);

        cout << Cmin << " " << Cmax << '\n';
    }

    return 0;
}