/* #include<bits/stdc++.h>
using namespace std;

void solve();

//template <typename T>
void printVec(vector<int> vec) {
    for(int i=0; i<vec.size(); i++) {
        cout<<vec[i]<<' ';
    }
    cout<<endl;
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        solve();
    }
    cout<<endl;
    return 0;
}

void solve() {
    string X;
    cin>>X;
    
    int count=0;
    for(int i=0; i<X.length(); i++) {
        if(X[i]=='4') {
            count++;
        }
    }
    
    cout<<count<<endl;
} */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    ll T;
    cin >> T;
    while(T--) {
        string str;
        cin >> str;
        int count = 0;
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '4') {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
