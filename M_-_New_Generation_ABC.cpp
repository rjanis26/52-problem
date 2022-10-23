#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    if(n<=125) 
        cout <<("4");
    else if(n<=211) 
        cout<<("6");
    else 
        cout<<("8");       
    return 0;
}
