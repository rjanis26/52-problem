 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<limits.h>

#define rep(i,n) for(int i=0; i<(n); i++)  
#define repo(i,n) for(int i=0; i<=(n); i++)
#define sf(x) scanf("%d", &x)
 
void solve() {
    int n; sf(n);
    int arr[n+3];
    rep(i,n) {
        sf(arr[i]);
    }
    int count=0, found=0;
    rep(i,n) {
        count+=1;
        for(int j=i+1; j<n; i++) {
            if(arr[i] == arr[j]) {
                found=1;
                 break;
            }
        }
          
    }
   
}

int main()
{
    int t;
    sf(t);
    while(t--) {
        solve();
    }
     
    return 0;
}   