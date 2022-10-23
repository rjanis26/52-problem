#include<bits/stdc++.h>
using namespace std; 

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t, len, count;
    cin >> t;
    count = 0;
    while(t--) {

        cin >> len;
        int arr[len];
        for(int i=0; i<len; i++) cin >> arr[i];

        if(len < 3) {           // minimum array len 2 
            cout << 0 << endl;
        }

        if(len == 3) {
        if(arr[0] == arr[1] and arr[1] == arr[2]) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
         }
            continue;
        }

        int p1 = -1, p2 = -1;
        for(int i=0; i<len; i++) {
            if(arr[i] == arr[i+1]) {    
                p1 = i+1;
                break;
            }
            
        }

        for(int i=len-1; i>0; i--) {
            if(arr[i] == arr[i-1]) {
                p2 = i-1;
                break;
            }
        }
        if(p1>p2 or p1 == -1) cout << 0 << endl;
        else if(p1 == p2) cout << 1 << endl;
        else {
            cout << p2-p1 << endl;
        }
    }

    return 0;
}