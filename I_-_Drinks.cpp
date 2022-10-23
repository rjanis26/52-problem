/* #include <stdio.h>

int main (void) {
    double c,b,d=0;
    int a;

    scanf("%d",&a);
    c=a*100.0;
    for(; a; a--) {
        scanf("%lf", &b);
        d=d+b;
    }

    printf("%.12f", d/c*100.0);

    return 0;
} */


#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    double boxes;
    cin >> boxes;   
    double sum=0;

    for(int i=1;i<=boxes; i++){
        double a;
        cin >> a;
        double parcent = a/100;
        sum += parcent;
    }

    double orange_percent = (sum/boxes)*100;
    cout << fixed<< setprecision(12) << orange_percent << endl;

    return 0;
}
