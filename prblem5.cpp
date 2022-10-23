#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    int arr[T];
    for(int i = 0; i < T; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < T; i++){
        for(int j = 0; j < arr[i]; j++){
            for(int k = 0; k < arr[i]; k++){
                cout <<"*";
            }
            cout << endl;
        }
        if(i < T-1){
            cout << endl;
        }
    }
}

     
    