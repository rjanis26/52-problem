#include<bits/stdc++.h>
using namespace std;

int main()
{   
    // int T, num;
    // cin>> T;

    // for(int i = 1; i <= T; i++){
    //     cin >> num;
    //     cout<< "case " << i <<" : ";

    //     for(int j = 1; j <= num; j++){
    //         if(num % j == 0)
    //             cout << j <<" ";
    //     }
    //     cout<<"\n";
    // }

    int T, num;
    cin >> T;

    for(int i =1; i <= T; i++){
        cin >> num;
        cout << "case " << i << " : ";

        for(int j = 1; j <= num; j++){
            if(num % j == 0)
                cout << j <<" " ;
        }
        cout << "\n";
    }

    return 0 ;
}