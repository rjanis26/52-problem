  #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
    int a=0, f=0;
    char s[100];
    scanf("%s",s);
    
    int len= strlen(s);
    for(int j=0; j<len; j++) {
        for(int i=j+1; i <len; i++) {
            if(s[j] == s[i]) {
                s[j] = '0';
            }
        }
    }
    
    for(int i=0; i<len; i++) {
        if(s[i] != '0') {
            a++;
        }
    }
     
    if( a%2 ==0) {
        printf("CHAT WITH HER!");        
    }
    else {
        printf("IGNORE HIM!");

    }

    return 0;
}   
  

/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
     
    char s[1000];
    scanf("%s",s);
    s[0]= toupper(s[0]);
    printf("%s", s);

    return 0;
}   */



/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
    int n, d;
    scanf("%d%d", &n, &d);
    int arr[n], s[n];
    for(int i=0;i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++) {
        s[i] = arr[(d+i)%n];
    }

    for(int i=0; i<n; i++) {
        printf("%d ", s[i]);
    }
     
    return 0;
}     */


/* #include<stdio.h>
#include<string.h>  
#include<stdbool.h>

int main()
{
    int n, counter=0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int len = strlen(s);
    
    for(int i=0; i<len; i++) {
        if(s[i] == s[i+1]) {
            counter++;
        }
    }

    printf("%d\n", counter);

    return 0;
} */

  
#include<stdio.h>
#include<string.h>

int main()
{
    int n=10;
    int a[n], b[n];
    
    for(int i=0; i<n; i++) {
        // write code here
        int temp = a[n];
        a[n] = b[n];
        b[n]= temp;
    }



    return 0;
}