#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // string str;
    // getline(cin, str);

    // if(str == "R R" ||  str == "R B" || str == "R G" || str == "B R" || str == "G R") {
    //     cout << "R" << '\n';
    // }
    // else if(str == "B B" || str == "B R" || str == "G B") {
    //     cout << "B" << '\n';
    // }
    // else if(str == "G G") {
    //     cout << "G" << '\n';
    // }

    char x, y;
    cin >> x >> y;
    
    if(x == 'R' || y == 'R') 
        cout << "R" << '\n';
    else if(x == 'B' || y == 'B')
        cout << "B" << '\n';
    else 
        cout << 'G' << '\n';

    return 0;
}