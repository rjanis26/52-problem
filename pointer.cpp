#include<bits/stdc++.h>
using namespace std;

int main() 
{   
    // char str[] = "Bangladesh";
    // cout << "Name of country: " << str << endl;
    // cout << "Address of str: " << &str << endl;

    // char c1 = 'A' , c2 = 'V' , c3 = 'C';
    // char *p1 = &c1, *p2 = &c2, *p3 = &c3;
    
    // cout << *p1 << *p2 << *p3 << endl;

    char c = 'A';
    char *p, **q;
    
    p = &c;
    q = &p;
    **q = 'B';

    cout << "value of c: " << c << endl;
    cout << "Value of c: " << *p << endl;
    cout << "Value of c : " << **q << endl;

     return 0 ;
}

















