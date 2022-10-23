#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  // use for input and output faster...
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, point;
    cin >> n >> point;
    int arr[n];
    int fail=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
         if(arr[i] < point) {
            fail++;
        }
    }

    // int fail=0;
    // for(int i=0; i<n; i++) {
    //     if(arr[i] < point) {
    //         fail++;
    //     }
    // }

    cout << fail << endl;
    return 0;
}