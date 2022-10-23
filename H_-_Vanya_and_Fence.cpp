#/* include <bits/stdc++.h>
using namespace std;
int n, h, a, sum = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > h) {
            sum++;
        }
        sum++;
    }
    cout << sum;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, h, sum=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>> arr[i];
        if(arr[i] > h) {
            sum++;
        }
        sum++;
    }

    cout << sum << endl;

    return 0;
}