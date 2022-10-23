#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int T;
    int num[100];
    cin >> T;

    for(int i = 0; i < T; i++){
        cin>> num[i];
    }
    
    int easy = 1;
    for(int i = 0; i < T; i++){
        if(num[i] == 1)
            easy = 0;
    }

    (easy == 0) ? cout << "Hard" : cout << "easy" << endl;

    return 0;
}

