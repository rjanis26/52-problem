#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int T;
    cin >> T;

    int arr[T];
    for(int i = 0; i < T; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < T; i++){
        cout << "Sum = " << arr[i] /10000 + arr[i] % 10 <<"\n";
    }
     
    return 0;
}


