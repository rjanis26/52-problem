/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL); // use for fast input and output...
    int num1, num2, num3;
    int large = 0;

    cout <<"Ente the 3 integr number: " ;
    cin >> num1 >> num2 >> num3;

    large = num1;
    if(num2 > large)
        large = num2;
    if(num3 > large)
        large = num3;
    
    cout << "Largest number between three: " << large << "\n";

    return 0;
} */


/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long T;
    cin >> T;

    while(T--)
    {
        vector<int> arr(7);
        int rainy = 0, sunny = 0;
        for(int i = 0; i < 7; i++){
            cin >> arr[i];
            arr[i] == 1? sunny++ : rainy++;
        }

        if (sunny > rainy)
            cout << "YES\n";
        else   
            cout << "NO\n";

    }
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int T;
    cin >> T;
    while(T--)
    {
        int num;
        cin >> num;
        cout << ((num % 10 == 0) ? num/10 : num/10+1) <<"\n";
    }
    return 0;
}
 */




///////////
#include <iostream>
using namespace std;
int main()
{
    int t, counter;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] == 4)
        {
            counter++;
        }
        cout << counter << endl;
    }
    return 0;
}