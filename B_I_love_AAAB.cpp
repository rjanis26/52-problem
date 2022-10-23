#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>> t;
    while(t--) {
        string s;
        cin >> s;
        int ans = 0;
        int a=0, b=0;

        for(int i=0; i<s.size(); i++)  {
            if(s[i] == 'A') a++;
            else b++;

            if(b > a) {
                ans = 1;
                break;
            }
        }

        if(s[0] == 'B' or ans==1 or s[s.size()-1] != 'B') {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }



    return 0;
}