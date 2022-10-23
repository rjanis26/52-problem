 #include<bits/stdc++.h>
using namespace std;

int main()
{   
    int T; //for test case....
    cin >> T;
    
    while(T--){
         string str;
         cin >> str;
        int left = 0, right;
        right = str.size() - 1;
        // binary search....
        while(left < right){
            char temp = str[left];
            str[left++] = str[right];
            str[right--] = temp;
        }
        cout << str << endl;
    }
     
    return 0;
}  





/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>> T;

    while(T--)
    {
        string str;
        cin >> str;
        for(int i = str.size(); i >= 0; i--){
            cout << str[i]
            ;
        }
    }

    return 0;
} */