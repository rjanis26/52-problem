  /* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // use for input and output faster...
    cin.tie(0);
    cout.tie(0);

    int n, k=-1;
    cin>> n;
    int arr[100001];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n; j++) {
            if(arr[j]%arr[i] ==0) {
                count +=1;
            }
        }
        if(count==n) {
            cout << arr[i];
            k=0;
            break;
        }
    }

    if(k!=0) {
        cout<< -1 << endl;
    }

    return 0;
}  
 */


 
/* #include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define sarr sf ("%d",&arr[i])
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    
    int n,i,arr[100001],m;
    bool k;

    cin>>n;
    for (i=0; i<n; i++)
        sf ("%d",&arr[i]);

    sort (arr,arr+i);

        m = arr[0];
        k = true;


        for (i=0; i<n; i++)
        {
            if (arr[i] % m != 0)
            {
                k = false;
                break;
            }
        }

        if (k)
            pf ("%d\n",m);
        else
            pf ("-1\n");
  

    return 0;
}   */

#include<bits/stdc++.h>
using namespace std;
#define frustated  ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++) 
#define endl "\n"

int main()
{
    frustated;

     int n,i,arr[100001],m;
    bool k;

    cin>>n;
     for (i=0; i<n; i++)
        cin>>arr[i];

    sort (arr,arr+i);

        m = arr[0];
        k = true;


         rep(i,n)
        {
            if (arr[i] % m != 0)
            {
                k = false;
                break;
            }
        }

        if (k)
            cout << m << endl;
        else
            cout<< -1 <<endl;
  

    return 0;
}