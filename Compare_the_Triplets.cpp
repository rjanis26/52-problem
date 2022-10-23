#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[3], arrb[3], a = 0, b= 0;

    for(int i = 0; i < 3; i++) cin >> arr[i];
    for(int i = 0; i < 3; i++) cin >> arrb[i];

    for(int i = 0; i<3; i++) {
        if(arr[i] > arrb[i]) {
            a++;
        }
        if(arr[i] < arrb[i]) {
            b++;
        }
        if(arr[i] == arrb[i]) {
            cout << "";
        }
    }
    
    cout << a << " " << b << endl;


    return 0;
}