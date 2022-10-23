
#include<bits/stdc++.h>
using namespace std;

int A;

int n,t;

long long a;

int main()

{

cin>>t;

while(t--)

{

cin>>n;

int ans=0;

for(int i=0;i<n; i++)

{

cin>>a;

A=a%9LL;

A=A/2LL;

ans^=A;

}

if(ans)

{

cout<<"Manasa"<< endl;

}

else

{

cout<<"Sandy"<< endl;

}


return 0;

}