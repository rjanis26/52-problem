#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int> arr, int n) {
    for(int i = 0; i <n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int len;
    cin >> len;
    vector<int> vec(len);
    for(int i=0; i<len; i++) {
        cin >> vec[i];
    }   

    sort(vec.begin(), vec.end());
    print_array(vec, len);


    return 0;
}