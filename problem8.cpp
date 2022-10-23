/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    int T; 
    cin >> T;
    int arr[T];
    for(int i = 1; i < T; i++){
        cin >> arr[i];
        cout << "case " << i <<" : " << endl;
    }

    for(int i = 1; i <= T-1; i++){
        for(int j = 1; j <= T - 1 - i; j++){
             if(arr[j] > arr[j+1]){
                 int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        for(int i = 1; i <= T; i++){
         cout << arr[i] << " ";
    }

    }
     

    return 0; 
}

 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int arr[T][3];

    for(int i = 0; i < T; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int i = 0; i < T; i++){
        sort(arr[i], arr[i]+3);
        cout << "Case " << i+1 << ": " << arr[i][0] << " " << arr[i][1]  << " " << arr[i][2] << endl;
    }

    return 0;
}