#include<stdio.h>
int main()
{   
    int abc, sum, c, a, b, x;
    scanf("%d", &abc);    
    c = abc % 10;
    x = abc/10;
    b = x%10;
    a = x/10;
    
    if(a!=0 && b!=0 && c!=0) {
        sum = abc + (b*100+c*10+a) +(c*100+a*10+b);
    }

    printf("%d", sum);

    
    return 0;
}
