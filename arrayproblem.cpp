#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[10] = {3, 2, 5, 8, 9, 1, 4 , 66, 33, 4};
    int len = 10;

    for(int i = 0; i < len; i++){
        int element = arr[i];
        if(element < 0)
            //element *= -1;
            cout<< element * -1<< endl;
        else
            cout << element << endl;
     }

 
    return 0;
}
