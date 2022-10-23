#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    int num;

    while(T--)
    {
        cin >> num;
        int sq_root = sqrt(num);
        // if(sq_root * sq_root == num)
        //     cout << "YeS\n";
        // else
        //     cout << "NO\n";

        (sq_root * sq_root == num) ? cout << "YES\n" : cout << "NO\n";
    }
}