 #include<bits/stdc++.h>
 #define endl "\n"
using namespace std;

 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int count =0;
        for(int i=0; i<n; i++) {
            if(arr[i] >=1000) {
                count++;
            }
        }
        cout << count << endl;
    }
     
    return 0;
}