#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t, N, age, count;
    cin >> t;
    
    while(t--) {
        count = 0;
        cin >> N;
        for(int i = 0; i<N; i++) {
            cin >> age;
            if(age >= 10 and age <= 60) {
                count++;
            }
            
        }
         
         cout << count << endl;

    }

    return 0;
}