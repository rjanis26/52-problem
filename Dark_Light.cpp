/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>> T;

    while(T--) {
        int n, k;
        cin>>n>>k;

        if(k == 0) {
            if(n%4== 0)
                cout<< "Off\n";
            else cout << "On\n";
        }
        else {
            if(n % 4 == 0) 
                cout << "On\n";
            else
                cout << "Ambiguous\n";
        }
    }


    return 0;
} */

