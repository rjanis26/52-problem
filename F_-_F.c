#include<stdio.h>
#include<string.h>

int main()
{
    int a, b; 
    scanf("%d %d", &a, &b);
    int count=0;
    
    if(a%2==1) {
        for(int i=1; i<=a; i++) {
            for(int j=1; j<= b; j++) {
                if(i%2==1) {
                    printf("#");               
                 }
                 else {
                      if(i%2==0 && i%4 != 0) {
                          if(j==b) {
                              printf("#");
                          }
                          else {
                              printf(".");
                          }
                      }
                      else if(i%4==0) {
                          if(j==1) {
                              printf("#");
                          }
                          else {
                              printf(".");
                          }
                      }
                 }
            }
            printf("\n");
        }
    }




    return 0;
}