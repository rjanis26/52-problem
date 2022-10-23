#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    int n, k, w;
    cin >> n >> k >> w;
    int cost = 0;
    for(int i = 1; i <= w; i++) {
        cost += i;
        
    } 
    
    int ans= cost*n;
    if(ans > k) {
        cout << (ans -k) << '\n';
    }
    else {
        cout << 0 << '\n';
    }

    return 0;
}




/* void searchElements(int arr[], int n, int item) {
    int index = 0, found=0;
    
    rep(i,n) {
        index += 1;
        if(arr[i]==item) {
            found=1;
            break;
        }
    }

    if(found==1) {
        printf("Element is found at index: %d\n", index-1);
    }
    else {
        printf("Element is not found.\n");
    }
}
 */