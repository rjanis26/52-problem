/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, a;
    cin>>n>>k>>a;
    
    int l=0;
    l=a;
    
    for(int i=1; i<k; i++) {
        if(l==n) {
            l=1;
        }
        else {
            l++;
        }
    }

    cout << l << endl;
    return 0;
} */


/* #include<bits\stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ans=0;
    string s; cin>>s;
    sort(s.begin(), s.end());

    for(int i=0; i<s.length(); i++) {
        if(s[i] != s[i-1]);
        ans++;
    }

    if(ans%2==0) 
        cout << "CHAT WITH HER!"<<endl;
    else cout <<"IGNORE HIM!"<<endl;

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin>>s;
    set<char> new_s;

    for(int i=0; i<s.size(); i++) {
        new_s.insert(s[i]);
    }

    if(new_s.size() &1) {
        cout << "IGNORE HIM!";
    }
    else {
        cout << "CHAT WITH HER!";
    }

    return 0;
}