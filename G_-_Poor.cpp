/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, y, z;
    cin>>x >> y >> z;

    if(x == y and y==z and z == x) {
        cout << "No" << endl;
    }
    else if((x == y and y==x) || (y == z and z == y) || (z == x and x == z)){
        cout << "Yes" << endl;
    }
     
    else {
        cout << "No" << endl;
    }
    

    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, y, z;
    cin>>x >> y >> z;

    if(x == y and y==z) {
        cout << "No\n";
    }
    
    else if(x != y and x != z and y != x) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
    }

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--) {
        int n; cin>>n;
        int fact=1;
        for(int i=0; i<=n; i++) {
            fact *= i;
        }
        cout<< fact << endl;
    }

}