#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution() {
    string str;
    cin >> str;

    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '4') {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--)
    {
        solution();
    }
    cout << "\n";

    return 0;
}