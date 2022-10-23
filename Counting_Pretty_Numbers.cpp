#include <iostream>
using namespace std;

int main() {
	 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    int count=0;
	    for(int i=x;i<=y;i++)
	    {
	        if(i%10==2 || i%10==3 || i%10==9)
	        count++;
	    }
	    cout<<count<<" "<<endl;
	}
	
	return 0;
}
