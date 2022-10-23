/* #include<stdio.h>
int main()
{   
    int n;
    scanf("%d", &n);
    int c=0;

    for(int i=1; i<=n; i++) {
        c++;
        if(i%2==0) {
            printf("I love ");
        }
        else {
            printf("I hate ");
        } 
        if(c!=n) {
            printf("that ");
        }
        
    }
     
    printf("it\n");
    
    return 0;
}
 */

/* #include<stdio.h>
#include<string.h>
#define rep(i,n) for(int i=0; i<(n);i++) 
#define repo(i,n) for(int i=0; i<=(n); i++)
#define repr(i,n) for(int i=n; i>0; i--) 
#define sf(x) scanf("%d", &x)
#define ssf(x,y) scanf("%d%d",&x,&y);

int main()
{
    int n; sf(n);
    int arr[n];
    int *ptr;
    ptr = &arr[0];

    printf("Enter the array element: \n");
    rep(i,n) {
        scanf("%d", ptr);
        ptr++; 
    }

    printf("Before reverse:\n");

    ptr =&arr[0];
    rep(i,n) {
        printf("%d ", *ptr);
        ptr++;
       
    }

    printf("\n");
    ptr = &arr[n-1];
    printf("After reverse: ");
    
    repr(i,n) {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
} */


/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

void intertElemets(int *ptr, int n) {
    for(int i=0; i<n; i++) {
        scanf("%d", ptr+i);
        ptr++;
    }
}

void printArray(int *ptr, int n) {
    for(int i=0;i<n;i++) {
        printf("%d ", *(ptr+i));
        ptr++;
    }
}

int main()
{   
    int n;
    scanf("%d", &n);
    int arr[n];

    intertElemets(arr, n);
    printArray(arr,n);


    return 0;
} */