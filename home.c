
#include<stdio.h>
#include<string.h>
    int main(){
    char a[100];
    int i,t,n;
    scanf("%d",&t);
    while(t!=0){
        scanf("%s",a);
        n=strlen(a);
        for(i=0;i<n;i++){
            if(i%2==1||i==0){
            printf("%c",a[i]);
            }
        }
        printf("\n");
        t--;
    }
    return 0;
}