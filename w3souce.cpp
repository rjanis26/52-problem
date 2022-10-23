/*   #include<bits/stdc++.h>
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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //int arr[] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
   int len= sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    
    int k=3;
    right_rotate(arr, k, len);
    print_array(arr, len);
 
    return 0;
}    
 */

 /* #include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define rep(i, n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<= (n); i++)

void print_array(int arr[], int n) {
    rep(i,n) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse_array(vector<int> &arr, int low, int high) {
    while(low < high) {
        swap(arr[low++], arr[high--]);
    }
}

void rotate(vector<int> &arr, int k) {
    
    int n= (int)arr.size();
    k = k% n;
    reverse_array(arr, 0, n-k-1);
    reverse_array(arr, n-k, n-1);
    reverse_array(arr, 0, n-1);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    int len;cin>> len;
    int arr[len];
    
    rep(i,len) cin>> arr[i];

    int k= 3;
    rotate(arr,len, k);
    print_array(arr, len);
 
    return 0;
}  */

// Find the missing element from the array

/* #include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define rep(i,n) for(int i=0; i<(n); i++)
 

int getMissingNum(int arr[], int n) {
    int x1 = arr[0];
    int x2=1;
    rep(i,n) {
        x1 = x1^arr[i];
    }
    for(int i=2; i <= n+1; i++) {
        x2 = x2^i;
    }
    return (x1^x2);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[] =   { 1, 2, 4, 5, 6 };
    int len = sizeof(arr)/sizeof(arr[0]);   

    int miss= getMissingNum(arr, len);
    cout << miss << endl;


    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n) {
    int n= arr.size();
    int duplicate =0;

    for(int i=0; i<n-1; i++) {
        duplicate = duplicate^i;
    }

    for(int j=0; j<n; j++) {
        duplicate= duplicate^arr[j];
    }
    return duplicate;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) {
    int n=arr.size();
    int ans;
    for(int i=0; i<n-1; i++) {
        int count=0;
        for(int j=0; j<n; ++j) {
            if(arr[j] == arr[i+1]) {
                count++;
            }
        }
        if(count > 1) {
            ans= arr[i];
        }
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
   int t; cin >>t;
   while(t--) {
       int n; cin>>n;
       int arr[n];
       for(int i=0;i<n; i++) {
           cin>>arr[i];
       }

       //cout << findDuplicate(arr);
   }

    return 0;
} */


/* #include<bits/stdc++.h>
using namespace std;

int nobleInteger(int arr[], int n) {
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++) {
            if(arr[i] <arr[j]) {
                count++;
            }
        }
        if(count==arr[i]) 
            return arr[i];
    }
    return -1;
}


int main()
{   
    int n; cin>>n;
    int arr[n+3];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int res = nobleInteger(arr,n);
    if(res!=-1) {
        cout<< "The noble integer: "<<res;
    }
    else {
        cout << "not found" <<endl;
    }

 
    return 0;
} */



 