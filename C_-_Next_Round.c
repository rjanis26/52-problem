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
 
 

int main()
{

     int a[100];
    int n;
    int j,p = 0;

    scanf("%d%d",&n,&j);


    rep(i,n){
        scanf("%d",&a[i]);
    }

    rep(i,n){
        if(a[i]>=a[j-1] && a[i]>0)
        {
            p++;
        }
    }

    printf("%d\n",p);

    return 0;
}