#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t_c;
	cin>>t_c;
	int arr[10]={6,2,5,5,4,5,6,3,7,6};
	while(t_c--)
	{
	    int a,b,n,sum=0;;
	    cin>>a>>b;
	    n=a+b;
	    while(n)
	    {
	        sum+=arr[n%10];
	        n=n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
