#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int len, sum = 0;
    cin>>len;
    int arr[len];
    for(int i =0; i<len; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}