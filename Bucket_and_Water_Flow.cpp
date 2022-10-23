 #include <iostream>
using namespace std;

 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) {
        int w, capasity, time, hour;
        cin>>w>>capasity>>time>> hour;

        int ans= w+ time*hour;

        if(ans == capasity) {
            cout <<"Filled" << endl;
            
        }
        else if(ans > capasity) {
            cout << "OverFlow" << endl;
        }
        else {
            cout << "UnFilled"<< endl;
        }
    }

    return 0;
}