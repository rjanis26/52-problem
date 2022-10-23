#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int min_shot(int arr[], int n, int h) {
    int shot=0;
    for(int i=0; i<n; i++) {
        if(arr[i] > h) {
            shot++;
        }
    }
    return shot;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>> t;
    while(t--) {
        int n, h;
        cin>>n>>h;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        cout << min_shot(arr, n, h) << endl;
    }
 
    return 0;
}