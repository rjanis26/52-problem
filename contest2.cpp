/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    int T;
    long long a, b;
    cin >> T;

    // while(T--)
    // {
    //     cin >> a >> b;
    //     cout << a + b << endl;
    // }

    for(int i = 0; i < T; i++){
        cin >> a >> b;
        cout << a + b << endl;
    }

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // long long a, b;
    //  while(1){
    //     cin >> a >> b;
    //     if (a == 0 || b == 0){
    //         break;
    //     }
    //     cout << a + b << endl;
    // } 

    // while(cin >> a >> b){
    //     if (a == 0 && b == 0)
    //         break;
    //     cout << a + b << endl;
    // }

    long long a;
    //int flag = 0
    int count = 0;
    while(1){
        cin >> a;
        if(a == 0) break;
        if(a < 0)
            //flag = 1;
            count++;
    }
    
    // if(flag == 0){
    //     cout<< "NO" << endl;
    // }else{
    //     cout << "Yes" << endl;
    // }

    cout <<"Total: " << count << endl;

}

