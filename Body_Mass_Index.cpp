#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x, y;
    cin >> t;
    while(t--) {
        cin>> x>> y;
        int bmi = x/(y*y);
        if(bmi <= 18) {
            cout << 1 << '\n';
        }
        else if(bmi >= 19 and bmi <= 24) {
            cout << 2  << '\n';
        }
        else if( bmi >= 25 and  bmi <= 29) {
            cout << 3 << '\n';
        }
        else
            cout << 4 << '\n';
    }

    return 0;
}


/* Category 1: Underweight if BMI ≤18
Category 2: Normal weight if BMI ∈{19, 20,…, 24}
Category 3: Overweight if BMI ∈{25, 26,…, 29}
Category 4: Obesity if BMI ≥30
Input: */