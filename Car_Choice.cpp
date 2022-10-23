#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, car1, car2,disel, petrol;
    cin>>t;
    while(t--) {
        cin>> car1 >>car2 >> disel >> petrol;
        int choose = car1/disel;
        int choose2 = car2/petrol;

        if(choose >choose2) {
            cout << -1 << '\n';
        }
        else if(choose == choose2) {
            cout<< 0 << '\n';
        }

        else {
            cout << 1 <<'\n';
        }
    }

     

    return 0;
}                       