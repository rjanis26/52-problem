#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++) 
#define repo(i,n) for(int i=0;i<=(n);i++) 
#define endl "\n"

void solution() {   
    int n; cin>>n;
    vector<int>a(n),b(n);
    rep(i,n) {
        cin>>a[i];
    }
    rep(i,n){
        cin>>b[i];
    }

    int count=0;
    int mini=*min_element(a.begin(), a.end());
    int flag=0;

    rep(i,n) {
        if(a[i] != mini) {
            if(a[i]-b[i] <mini) {
                flag=1;
                break;
            }
            else {
                while(a[i]!=mini) {
                    a[i] = a[i] -b[i];
                    count++;
                }
            }
        }
        else {
            continue;
        }
    }
    if(flag==1) {
        cout<<-1 << endl;
    }
    else{
        cout<<count<< endl;
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);
    solution();

    return 0;
}