#include<bits/stdc++.h>
using namespace std;

int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, len, count;
    cin >> t;
    
    while(t--) {
        count = 0;
        cin >> len;
        int arr1[len], arr2[len];
        for(int i = 0; i < len; i++) cin >> arr1[i];
        for(int i = 0; i < len; i++) cin >> arr2[i];

        for(int i = 0; i < len; i++) {
            if(arr1[i] == arr2[i]) {
                count++;

            }
        }
        cout << count<< endl;
        
    }


    return 0;
}