#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int len;
    cin >> len;
    ll arr[len], sum = 0;
    for(int i =0; i < len; i++) {
        cin>> arr[i];
        sum += arr[i];

    }   
    cout << sum << endl;

    return 0;
}