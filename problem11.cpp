#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    int arr[t];
    for(int i = 0; i < t; i++){
        cin >> arr[i];
    }

    long long output;
    for(int i = 0; i < t; i++){
        output = 1;

        for(int j = 1; j <= arr[i]; j++){
            output *= j;
        }
        cout << output << "\n";

    }
 
     return 0;
}