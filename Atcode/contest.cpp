 #include<bits/stdc++.h>
 

using namespace std;
//using namespace atcoder;
#define ll long long int
#define rep(i,n) for(int i=0;i<(n);i++)
#define repo(i,n) for(int i=1;i<=(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define rrepo(i,n) for(int i=(n);i>=1;i--)
#define rep2(i,s,n) for(int i=(s);i<(n);i++)
#define repr2(i,s,n) for(int i=(n)-1;i>=(s);i--)
#define vrep(v,V) for(auto &v:V)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define allc(x) (x).cbegin(),(x).cend()
#define allr(x) (x).rbegin(),(x).rend()
#define vec(T) vector<T>
#define vvec(T) vector<vector<T>>
#define vvvec(T) vector<vector<vector<T>>>
#define pvec(T,U) vector<pair<T,U>>

//using mint = modint998244353;
//using mint = modint1000000007;

template <typename T>
bool chmax(T& a,const T& b){if(a<b){a=b;return true;}else{return false;}}
template <typename T>
bool chmin(T& a,const T& b){if(a>b){a=b;return true;}else{return false;}}
template <typename T>
bool chmax2(T& a,T& b,T& c){if(a<=c){b=a;a=c;return true;}else if(b<c){b=c;return true;}else{return false;}}
template <typename T>
bool chmin2(T& a,T& b,T& c){if(a>=c){b=a;a=c;return true;}else if(b>c){b=c;return true;}else{return false;}}


int main(){
  int T;
  ll N,M,A,B;
  cin>>T;
  rep(i,T){
    cin>>N>>M>>A>>B;
    cout<<floor_sum(N,M,A,B)<<endl;
  }
} 

#include<bits/stdc++.h>
//#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main() {
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int N,M,A,B;
        cin>>N>>M>>A>>B;
        cout<<floor_sum(N,M,A,B)<<endl;
    }
 
 
 
}