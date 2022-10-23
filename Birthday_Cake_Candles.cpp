#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, count = 0;
    cin >> n;
    int arr[n];
    int max= 0;

    // for(int i=0; i<n; i++) {
    //     cin >> arr[i];
    // }

    for(int i= 0; i <n; i++) {
        cin >>arr[i];
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] == max) {
            count++;
        }
    }

    // for(int i= 0; i < n; i++) {
    //     if(arr[i] == max) {
    //         count++;
    //     }
    // }
    cout << count << endl;


    return 0;
}