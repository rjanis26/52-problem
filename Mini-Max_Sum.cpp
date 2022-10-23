#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[5];
    for(int i=0; i<5; i++) {
        cin >> arr[i];
    }

    int min_val = arr[0], max_val = arr[0];
    long long int sum = arr[0];
    for(int i=1; i< 5; i++) {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
        sum += arr[i];
    }
    
    cout << sum - max_val << " " << sum - min_val << endl;

    return 0;
}