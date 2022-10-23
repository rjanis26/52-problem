
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int run, over,score;
    cin >> run >> over>> score;
    int temp_score = ((20 - over)*36 + score);
    if(temp_score > run) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }

    return 0;
}