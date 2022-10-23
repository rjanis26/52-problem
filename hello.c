#include<stdio.h>
#include<string.h>

#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++);
#define sf(x) scanf("%d", &x)
#define ssf(x,y) scanf("%d%d", &x, &y)

int main()
{
    char str[100];
    int i,t,n;
    sf(t);
    while(t!=0) {
        scanf("%s", str);
        n=strlen(str);
        rep(i,n) {
            if(i%2==1 || i==0) {
                printf("%c", str[i]);
            }
        }
        printf("\n");
        t--;
    }

    return 0;
}  
 
 