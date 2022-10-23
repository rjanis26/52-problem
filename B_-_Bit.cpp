#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, val = 0;
    char str[4];
    cin >> n;

    cin.getline(str, 4);
    for(int i = 0; i < n; i++) {
        cin.getline(str, 4);
        for(int j =0; j < 3; j++) {
            if(str[j] == '+') {
                val++;
                break;
            }
            else if(str[j] == '-') {
                val--;
                break;
            }
        }

    }
    cout << val << endl;

    return 0;
}