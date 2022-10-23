/* #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count = 0;
        while(n > 0){
            if(n % 10 == 4)
                count++;
            n /= 10;
        }
        cout << count << endl;
    }
     

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

void solve();

// void printVector(vector<int> vec) {
//     for(int i = 0; i < vec.size(); i++) {
//         cout << vec[i] << ' ';
//     }
//     puts(" ");
// }

int main()
{   
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    cout << "\n";

    return 0;
}

void solve() {
    string str;
    cin >> str;
    int count = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '4') {
            count++;
        }
    }
    cout << count << "\n";
}













