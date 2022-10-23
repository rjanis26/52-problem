#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int x; 
    cin>>x;

    if(x >= 0 and x <40) {
        cout << 40-x << endl;
    }
    else if(x >= 40 and x < 70) {
        cout << 70-x<< endl;
    }
    else if(x >= 70 and x<90) {
        cout << 90 -x << endl;
    }
    else if(x >= 90) {
        cout << "expert" << endl;
    }

    return 0;
}

/*Newbie, if her marks are not less than 00 but less than 4040;
Pupil, if her marks are less than 4040 but less than 7070;
Specialist, if her marks are not less than 7070 but less than 9090;
Expert, if her marks are not less than 9090.  */