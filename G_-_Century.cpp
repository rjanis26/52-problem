#include <bits/stdc++.h>
using namespace std;
 
void find_century(int year)
{
    // No negative value is allow for year
    if (year <= 0)
        cout << 0 << endl;
 
    // If year is between 1 to 100 it
    // will come in 1st century
    else if (year <= 100)
        cout << "1";
 
    else if (year % 100 == 0)
        cout << year/ 100 << endl;
    else
        cout << (year/ 100) +1 << endl;       
}
 
// Driven code
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int n;
    cin >> n;

    find_century(n);
    return 0;
}