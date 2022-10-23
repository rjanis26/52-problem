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
    char s[100],t[100];
    scanf("%s%s", s,t);

    for(int i=0; i<strlen(s); i++) {
        s[i] = tolower(s[i]), t[i]=tolower(t[i]);
        printf("\n", strcmp(s, t));
    }
    
     
    return 0;
}