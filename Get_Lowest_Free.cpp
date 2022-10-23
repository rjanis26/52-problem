/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, a, b, c, cost; 
    cin >> t;
    while(t--) {
        cin>>a>>b>>c ;
        
        if(a<b and a<c)
        {
            cout<<b+c<<endl;
        }
        else if(b<c)
        {
            cout<<a+c<<endl;
        }
        else
        {
            cout<<a+b<<endl;
        }
    }  



    return 0;
} */


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout<<a+b+c-min({a,b,c})<<"\n";
	}
	return 0;
}