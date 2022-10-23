/* #include<bits/stdc++.h>
using namespace std;
#define endl  "\n"

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;

    int a, b, c; 
    while(t--) {
        cin >> a >> b >> c; 
        int x,y,z;
        x = a+b; 
        y = b+c; 
        z = c+a;

        if(x >= y and x>= z) 
            cout << x <<endl;
        else if(y >= x and y>= z)
            cout << y << endl;
        else 
            cout << z << endl;


    }


    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
#define endl  "\n"

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;

    int a, b, c; 
    while(t--) {
        cin >> a >> b >> c; 
        int x,y,z;
        x = a+b; 
        y = b+c; 
        z = c+a;

        int ans = max(x,max(y,z));
        cout << ans << endl;
    }


    return 0;
}