/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b; 
    cin >> a >> b;
    int count=0;
    for(int i=a; i<=b; i++) {
        count++;
    }
    cout << count << endl;


    return 0;
} */

/* #include<stdio.h>
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
 */

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
 
 