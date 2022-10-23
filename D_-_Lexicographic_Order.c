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

    int idx=0; 

    while(s[idx]==t[idx] && s[idx] != '\0' && t[idx] != '\0') {
        idx++;
    }
    
    if(s[idx]>= 'a'&& s[idx]<='z' || t[idx]>= 'a' &&t[idx]<='z' &&  strlen(s)>=1 && strlen(s)<=10 || strlen(t)>=1 && strlen(t)<=10 )
    {
        if(s[idx]== '\0' && t[idx] != '\0') {
        printf("Yes\n");
    }
    else if(s[idx] != '\0' && t[idx] == '\0') {
        printf("No");
    }
    }


     
    return 0;
}