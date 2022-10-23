#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, count;
    cin >> t;

    int arr[5];

    while(t--) {
        count =0;
        for(int i=0; i<5; i++) {
            cin >> arr[i];
            if(arr[i] == 1) {
                count++;
            }
        }
        if(count==0) {
        cout  << "Beginner" << endl;
    }
    else if(count==1)  
        cout << "Junior Developer" << endl;
    else if(count==2) 
        cout << "Middle Developer" << endl; 
    
    else if(count==3) 
        cout << "Senior Developer" << endl;
    else if(count==4) 
        cout << "Hacker" << endl;
    else if(count==5) 
        cout << "Jeff Dean" << endl; 
    }


    return 0;
}