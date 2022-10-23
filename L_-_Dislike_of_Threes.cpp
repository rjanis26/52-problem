/* #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 4
vector<int> a;
void pre(){
    for(int i=1;i<=100000;i++){
        if(i%3!=0 && i%10!=3){
            a.push_back(i);
        }
    }
}
void  solve(){
    int n;
    cin>>n;
    cout<<a[n-1]<<endl;
}

int main()
{
    pre();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        for(int i=1;;i++){
            if(i%3==0 || i%10 == 3){
                continue;
            }else{
                --k;// 3 2 1 0
                if(k==0){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}

 */

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; 
    cin>>t;
    while(t--) {
        int k;
        cin >>k;
        for(int i=1 ;; i++) {
            if(i%3==0 or i%10 == 3) 
                continue;
            else {
                k--;
                if(k==0) {
                    cout << i << endl;
                    break;
                }
            }
        }

    }

    return 0;
}