#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    string s; 
    cin >>s;
    int a=0, d=0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'A') {
            a++;
        }
        if(s[i] == 'D') {
            d++;
        }
    }

    if(a==d) {
        cout << "Friendship" << endl;
    }
    if(a>d) {
        cout << "Anton" << endl;
    }
    else if(a<d) {
        cout << "Danik" << endl;
    }

    return 0;
}