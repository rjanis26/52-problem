/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int len, sum = 0, d_sum1 = 0, d_sum2 = 0;
    cin >> len;
    int arr[len][len];

    for(int i = 0; i< len; i++) {
        for(int j =0; j < len; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i <len; i++) {
        for(int j =0; j < len; j++) {
            if(i == j) {
                d_sum1 += arr[i][j];
            }
            if(i+j== len-1) {
                d_sum2 += arr[i][j];
            }
        }
    }

    sum = d_sum1 - d_sum2;
    if(sum < 0 )
        sum = sum* -1;
    cout << sum << endl;

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
const Max= 100;

void diagonalSum(int arr[][Max], int n) {
    int first = 0, second = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                first += arr[i][j];
            }
            if(i+j == (n-1)) {
                second += arr[i][j];
            }
        }
    }
    cout << "first: " << first << endl;
    cout << "Second: "<< second << endl;

}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[][Max];
    for(int i = 0; i < Max; i++) {
        for(int j= 0; j < Max; j++) {
            cin >> arr[i][j];
        }
    }

    diagonalSum(arr, Max);



    return 0;
}