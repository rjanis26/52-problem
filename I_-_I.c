#include<stdio.h>
int main()
{   
    int x; 
    scanf("%d", &x);

    if(x >= 0 && x <40) {
        printf("%d",40-x );
    }
    else if(x >= 40 && x < 70) {
        printf("%d",70-x);
    }
    else if(x >= 70 && x<90) {
        printf("%d\n", 90 -x);
    }
    else if(x >= 90) {
        printf("expert\n");
    }
    
    return 0;
}
