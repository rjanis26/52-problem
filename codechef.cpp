/* #include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;


int main()
{   
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // int T;
    // cin >> T;

    // while(T--)
    // {
    //     int n, x, p;
    //     cin >> n >> x >> p;
    //     if(x*3 - (n-x) >= p){
    //         cout << "PASS" <<endl;
    //     } 
    //     else{
    //         cout << "FAIL" << endl;
    //     }
    // }
 
    return 0;
} */

/* #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll T;
    cin >> T;

    while(T--)
    {   
        vector<int> arr(7);
        int sunny = 0, rainy = 0;
        for(int i = 0; i < 7; i++){
            cin >> arr[i];
            (arr[i] == 1) ? sunny++ : rainy++;
        }
        if(sunny > rainy) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
} */

/* #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int result = (x/a + y/b);
        cout << result << endl;
    }


    return 0;
} */

//alteranative swap from the array....

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

 void swap_alternate(int arr[], int size){
    
    for(int i = 0; i < size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
        
}

int  main()
{
    int odd[8] = {5, 4, 3, 2, 8, 7, 9, 11};
    int even[5] = {1, 3, 5, 7, 9};

    swap_alternate(even, 5);
    print_array(even, 5);
    swap_alternate(odd, 8);
    print_array(odd, 8);
     
     

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void swap_alternative(int arr[], int size){

    for(int i = 0; i < size; i += 2){
        if(i + 1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void print_array(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int even[8] = {1, 3, 5, 7, 9, 11, 13, 19};

    cout << "Orginal array: " << endl;
    print_array(even, 8);
    
    cout << "After swapping of the array: " << endl;
    swap_alternative(even,8);
    print_array(even, 8);

    return 0  ;  
} */

/* #include<bits/stdc++.h>
using namespace std;

int find_unique(int arr[], int size){

    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];  // this is bitwise operator .its call XOR  it's return only unique value..  

    }

    return ans;
}

void print_array(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);  // use for fast input and output....

    int arr[5] = {1, 3, 5, 3, 1};

    cout <<"Orginal array: " << endl;
    print_array(arr, 5);
    int result = find_unique(arr, 5);
    cout << result << endl;


    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(0);

    int T;
    cin >> T;
    while(T--){
        long long range;
        cin >> range;
        if(range>= 2000 && range <= 4500) {
            cout <<"1" << endl;
        }
        else if(range < 2000 && range>=1600) {
            cout << "2" << endl;
        }
        else if(range >= 1000) {
            cout << "3" << endl;
        }
    }

    return 0;
} */


/* #include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int size, int target) {

    int start = 0, end = size - 1;
    while(start <= end) {
        int middle = start + (end - start) /2;
        if(arr[middle] == target) {
            return middle;
        }
        else if(arr[middle] < target) {
            start = middle + 1;
        }
        else{
            end = middle - 1;
        }
    }
    return -1;
}

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int even[5] = {2, 4, 6, 8, 10};
    int index = binary_search(even, 5, 2);

    (index == -1) ? cout << "Element is not found!" : cout << "Element found at index : " << index << endl;
    
    
    
    
    
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e) {

        if(arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key) {
            s = mid + 1;
        }
        else if(arr[mid] > key) {
            e = mid - 1;
        }
        return ans;
     }
    return -1;
    mid = s + (e-s)/2;

}

int main() 
{
    int even[7] = {1, 2, 2, 2, 3, 4, 5};
    cout <<"First Occurence: " << firstOcc(even, 7, 2) << endl;

    return 0;
}
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{   
     
    

    return 0;
}




