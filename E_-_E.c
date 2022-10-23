#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,i,j,cnt1=0,cnt2=0,stop=0;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    for(i=0;i<102;i++)
    {
        for(j=1;j<=a;j++)
        {
            cnt1+=b;
            stop++;
            if(stop>=g)
                break;
        }
             if(stop>=g)
                break;
        for(j=1;j<=c;j++)
        {
            stop++;
            if(stop>=g)
                break;
        }
                    if(stop>=g)
                break;
    }
    stop=0;
     for(i=0;i<102;i++)
    {
        for(j=1;j<=d;j++)
        {
            cnt2+=e;
            stop++;
            if(stop>=g)
                break;
        }
             if(stop>=g)
                break;
        for(j=1;j<=f;j++)
        {
            stop++;
            if(stop>=g)
                break;
        }
                    if(stop>=g)
                break;
    }
    if(cnt1>cnt2)
        printf("Takahashi");
    else if(cnt1<cnt2)
        printf("Aoki");
    else if(cnt1==cnt2)
        printf("Draw");

    return 0;
}