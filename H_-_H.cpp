#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    int c=0;
    for(int i=1; i<=n; i++) {
        c++;
        if(i%2==0) {
            cout << "I love ";
        }
        else {
            cout << "I hate ";
        } 
        if(c!=n) {
            cout << "that ";
        }
        
    }
     
    cout << "it" << endl;
    return 0;
}