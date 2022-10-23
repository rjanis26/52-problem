/* #include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    if(n == 1) return 1;
    else return n + sum(n-1);
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;

    cout << sum(num) << endl;

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int Factorial(int n) {
    if(n < 0) return -1;
    if(n == 0) return 1;
    else return n * Factorial(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    cout << Factorial(n) << endl;


    return 0;
} */

/* #include <iostream>
using namespace std;
#define N 5
 
void print(int n)
{
    if (n <= 0) {
        return;
    }
 
    print(n - 1);
    cout << n << " ";
}
 
int main()
{
    print(N);
    return 0;
}
 */
/*  #include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    if(n == 1) return 1;
    else return solve(n-1);
    cout << n << " ";
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    cout << solve(n);

    return 0;
}  */

/* #include<bits/stdc++.h>
using namespace std;

void print(int n) {
    if(n == 1) {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    print(n-1);
}

int main()
{   
    int n;
    cin >> n;

    print(n);
    return 0;
} */
