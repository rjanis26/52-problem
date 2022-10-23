#include<stdio.h>
int main()
{   
    int t,p,q, m=0, rem=0;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {
        scanf("%d %d", &p, &q);
        rem = q-p;
        if(rem >= 2) {
            m++;
        }
    }

    printf("%d", m);
    return 0;
}