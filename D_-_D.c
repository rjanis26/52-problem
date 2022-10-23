 /*  #include<stdio.h>
int main()
{   
    int n;
    scanf("%d", &n);

    int a=0, d=0, i;
    for( i=0; i<n; i++) {
        char c;
        scanf("%c", &c);
        if(c== 'A') {
            a+=1;
        }
        if(c== 'D') {
            d+=1;
        }
    }

    if(a==d) {
        printf("Friendship\n");
    }
    else if(a>d) {
        printf("Anton\n");
    }
    else  {
        printf("Danik\n");
    }

 */

/* #include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main ()
{
    int a;
    scanf("%d",&a);
    int ant=0;
    int dan=0;
    for(int i=1;i<=a;i++){
        char c;
        scanf(" %c",&c);

        if(c=='A'){
            ant++;
        }
        else if(c=='D'){
            dan++;
        }

    }
    if( ant>dan){
        printf("Anton");
    }
   else if(dan>ant ){
        printf("Danik");
   }
    else if(ant == dan){
        printf("Friendship");
    }
    return 0;

} */


