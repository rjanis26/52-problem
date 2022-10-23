#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t,p,q, m=0, rem =0;
    cin>>t;
    for(int i=0; i<t; i++) {
        cin>>p >> q;
         rem = q-p;
        if(rem >= 2) {
            m++;
        }
    }
    
    cout << m << endl;
    return 0; 
}