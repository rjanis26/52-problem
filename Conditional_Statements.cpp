#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;

    string str[10] = {"Greater than 9", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};

    if(n>9) {
        cout << str[0];
    }
    else {
        cout << str[n];
    }


    return 0;
}