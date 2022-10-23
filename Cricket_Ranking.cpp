#include<bits/stdc++.h>
using namespace std;
#define endl  "\n"

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    int r1, w1, c1, r2, w2, c2;
    
    while(t--) {
        int a=0, b=0; 
        cin >> r1>> w1>> c1;
        cin >> r2>> w2 >> c2;

        if(r1 > r2) a++;
        else b++;
        if(w1 > w2) a++;
        else b++;
        if(c1>c2) a++;
        else b++;

        if(a > b) 
            cout << "A" << endl;
        else 
            cout << "B" << endl;
    }   


    return 0;
}