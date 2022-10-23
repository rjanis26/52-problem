/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int r, f, m, t;
    cin >> r >> f >> m>> t;

    bool is_short;
    
    do{
        if(f>r) {
            cout << "F";
            is_short = true;
            break;
        }
        else {
            r= r-f;
        }
        if(m>r) {
            cout << "M";
            is_short= true;
            break;
        }
        else{
            r=r-m;
        }
        if(t>r){ 
            cout << "T";
            is_short =true;
            break;
        }
        else {
            r=r-t;
        }
    } while(is_short==false);
      

    return 0;
} */


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int r, f, m, t;
    cin >> r >> f >> m>> t;

    bool is_short=false;
    
    while(true) {
        if(f>r) {
            cout << "F";
            is_short = true;
            break;
        }
        else {
            r= r-f;
        }
        if(m>r) {
            cout << "M";
            is_short= true;
            break;
        }
        else{
            r=r-m;
        }
        if(t>r){ 
            cout << "T";
            is_short =true;
            break;
        }
        else {
            r=r-t;
        }
    }
      

    return 0;
}  

