#include <iostream>
using namespace std;
 
 
int main()
 {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n, cnt = 0, notrt = 0;     //n = total crimes and police recruits
    cin >> n;                      //cnt = police recruits
                                   //notrt = untreated crimes
    while(n--) {
        int v;
        cin >> v;
         
        if(v > 0) {                //if input value is +ve
            cnt = cnt + v;         //increment police recruits to that value
        }
        else if(v < 0){            //if input value is -1 and
            if(cnt > 0) {          //if we have some +ve value of cnt 
                cnt--;             //then cnt is decremented
            }
            else {                 //if input value is -1
                notrt++;           //and no +ve value for cnt,
            }                      //untreated crimes is incremented
        }
    }
     
    cout << notrt << endl;         //output the untreated crimes
     
    return 0;
}