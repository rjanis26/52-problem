/* #include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define endl "\n"


bool isPlindrome(string str, int len) {
    int i=0; 
    while(i<(len/2)) {
        if(str[i] != str[len-i-1]) {
            return 0;
        }
        i++;
    }
    return 1;
}


int main()
{

    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(nullptr);

    string str;
    cin>>str;

    int len = str.size() ;
    if(isPlindrome(str,len)) 
        cout<<"YES" << endl;
    else 
        cout << "NO" << endl;



    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define endl "\n"
 

int main()
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(nullptr);

    string str;
    cin>>str;

    int len = str.length();
    string rev;
    for(int i= len-1; i>=0; i--)
        rev = rev + str[i];
    
    if(str==rev) 
        cout<<"YES" <<endl;
    else
        cout<< "NO" << endl;

 
    return 0;
}
 
 