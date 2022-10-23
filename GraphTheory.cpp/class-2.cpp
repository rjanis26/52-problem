 #include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse_array(int arr[], int low, int high) {
    while(low < high) {
        swap(arr[low++], arr[high--]);
    }
}

void right_rotate(int arr[], int d, int n) {
    d=d%n;
    reverse_array(arr, 0, n-1);
    reverse_array(arr, 0, d-1);
    reverse_array(arr, d, n-1);

}

int main()  
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    int arr[] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len= sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    
    int k=3;
    right_rotate(arr, k, len);
    print_array(arr, len);

     



    return 0;
}  