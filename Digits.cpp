#include<bits/stdc++.h>
using namespace std;

bool check_divisibility(int n, int digit) {
    return (digit !=0 and n%digit !=0);
}

bool all_digits_divide(int n) {
    int temp = n;
    while(temp>0) {
        int digit = n%10;
        if(!(check_divisibility(n, digit)))
            return false;

        temp/=10;
    }
}

int  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; 
    cin >> n;

    if(all_digits_divide(n))
        cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}