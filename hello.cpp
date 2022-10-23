/* #include<bits/stdc++.h>
using namespace std;
#define endl "\n"

string reverse_string(string str) {
    string new_str = str;
    int index=0;

    for(int i=new_str.length()-1; i>=0; i--) {
        str[index] = new_str[i];
        index++;

    }
    return str;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    cout << reverse_string(str);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void reverse_words(string s) {
    vector<string> s;
    string str = "";

    for(int i=0; i<s.length()-1; i++) {
        if(s[i] == ' ') {
            s.push_back(str);
            str = "";
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s = "i like this program";
    reverse_words(s);




    return 0;
} */


// C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse words*/
void reverseWords(string s)
{
	
	// temporary vector to store all words
	vector<string> tmp;
	string str = "";
	for (int i = 0; i < s.length(); i++)
	{
		
		// Check if we encounter space
		// push word(str) to vector
		// and make str NULL
		if (s[i] == ' ')
		{
			tmp.push_back(str);
			str = "";
		}

		// Else add character to
		// str to form current word
		else
			str += s[i];
	}

	// Last word remaining,add it to vector
	tmp.push_back(str);

	// Now print from last to first in vector
	int i;
	for (i = tmp.size() - 1; i > 0; i--)
		cout << tmp[i] << " ";
	// Last word remaining,print it
	cout << tmp[0] << endl;
}

// Driver Code
int main()
{
	string s = "i like this program very much";
	reverseWords(s);
	return 0;
}
