/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char str[100];
    cin.getline(str, 100);    
    int word = 1, ch = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] == ' ') && (str[i-1] != ' '))
            word++;
        else if(str[i] != ' ') 
            ch++;
    }
    cout << "Number of words: " << word << '\n';
    cout << "Number of character: " << ch << '\n';

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
  
char toLowerCase(char ch) {
    if(ch >= 'a' and ch <= 'z') 
        return ch;
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char arr[], int n) {
    int start = 0, end = n-1;
    while(start <= end) {
        if(toLowerCase(arr[start]) != toLowerCase(arr[end]))
            return 0;  
            else {
            start++;
            end--;
        }
    }                
        
    return 1;
    
}   

void reverseString(char name[], int n) {
    int left = 0, right = n-1;
    while(left < right) {
        swap(name[left++], name[right--]);
    }

}

int getLenght(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main()
{   
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout << "your name is ";
    cout << name << endl;

    //cout << "Length: " << getLenght(name) << endl;
    int len = getLenght(name);
    //cout << "Lenght: " << len << endl;

    reverseString(name,len);
    cout << name << endl;

    cout << "Palindrome  or not: " << checkPalindrome(name, len) << endl;

    cout << "Character is: " << toLowerCase('b') << endl;
    cout << "Character is: " << toLowerCase('c') << endl;



    return 0;
}