 #include<stdio.h>
#include<string.h>
int main()
{
    int s,t,x;
    scanf("%d %d %d", &s, &t, &x);
    char str[20];
    for(int i=s; i<= 24; i++) {
        if(i > 23) {
            i=0;
        }
        if(i==x) {
            strcpy(str, "Yes");
            break;
            
        }
        else {
            strcpy(str, "No");
             
        }
        if(i==t-1) {
            break;
        }
    }
    puts(str);

    return 0;
} 

#include<stdio.h>
#include<string.h>
int main()
{
    int s,t,x;
    scanf("%d %d %d", &s, &t, &x);
    
    if(t==0) {
        t=24;
        if(x==s) {
            printf("Yes");
        }
        else if(s > t && s < x) {
            printf("Yes");
        }
        else if(t < x) {
            printf("Yes");

        }
        else {
            printf("No");
        }
    }
    return 0;
}
 

 