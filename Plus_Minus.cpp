/* #include <bits/stdc++.h>
using namespace std;

int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin>>n;
    int p=0;int m=0;int z=0;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        
    }  
        for(int i=0;i<n;i++)
        {   if(ar[i]>0)
            p++;
        else if(ar[i]<0)
        m++;
        
        else z++;
            
        }
    double a1,a2,a3;
    a1=double(p)/double(n);a2=double(m)/double(n);a3=double(z)/double(n);
    cout<<a1<<"\n"<<a2<<"\n"<<a3;
            
    return 0;
}

   */

#include<bits/stdc++.h>
using namespace std;
#define frustated  ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++) 
#define endl "\n"

int main()
{
    

    int i,n, arr[100001], m;
    bool k;
    cin>>n;

    rep(i,n) 
        cin>>arr[i];
    sort(arr, arr+i);

    m=arr[0];
    k=true;
    rep(i,n) {
        if(arr[i]%m != 0) {
            k=false;
            break;
        }
    }

    if(k) 
        cout<<m<<endl;
    else 
        cout <<-1 << endl;

 
         
    return 0;
}