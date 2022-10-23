#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, count = 0; 
    cin >> a >> b;
    while(true) {
        if(a > b) {
            break;
        }
        count++;
        a = a*3;
        b = b*2;
    }
    cout << count << endl;
    return 0;
}