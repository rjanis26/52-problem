/* #include<bits/stdc++.h>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

int main()
{   
    Distance d1, d2;
    d1.feet = 12;
    d1.inches = 9.5;
    
    cout << "Enter the feet: " << endl;
    cin >> d2.feet;
    cout << "Enter inches: " << endl;
    cin >> d2.inches;

    // cout << d1.feet << "\'-" << d1.inches<< endl;
    // cout << d2.feet << "\'-" << d2.inches << endl;

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;
struct Distance
{
    int feet;
    float inches;

};

int main()
{
    Distance d[5];
     
    cout << "Enter feet and inches: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> d[i].feet >> d[i].inches;
    }
    for(int i = 0; i <5; i++) {
        cout<< d[i].feet << "\'-" << d[i].inches << endl;
    }

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

struct Student
{
    int rno;
    char name[25];
    float marks[5];
};

int main()
{   
    Student s;
    cout << "Enter Roll Number: " << endl;
    cin >> s.rno;
    cout << "Enter name: " << endl;
    cin.get(s.name, 25);

    for(int i = 0; i < 5; i++) {
        cout << "Enter your marks-" << (i+1) <<" : " << endl;
        cin >> s.marks[i];
    }
    cout << "Roll number: " << s.rno << endl;
    cout << "Name: " << s.name << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Enter your marks-" << (i+1) <<" : " << s.marks[i] << endl;
    }

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

void input (Person p){

    cout << "Enter your  fullname: ";
    cin.get(p.name, 50);
    cout << "Enter your age: ";
    cin >> p.age;
    cout << "Enter your salary: " ;
    cin >> p.salary;
}

void print_inf(Person p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "salary :" << p.salary << endl;

}

int main()
{   
    Person p, tmep;
    input(p);    
    print_inf(p);
     
    return 0;
} */



/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int row, count=1;
    cin>>row;
    for(int i=1; i<=2*row-1; i++) {
        for(int j=1; j<= count; j++) {
            cout << "*";
        }
        if(i<row) count++;
        else count--;
        cout << "\n";
    }
      

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int row, count=1;
    cin >> row;
    int space=row/2;

    for(int i=1; i<=row; i++) {
        for(int k=1; k<=space; k++) {
            cout << " ";
        }
        for(int j=1; j<=count; j++) {
            cout << "*";
        }
        if(i <=row/2) {
            count+=2;
            space--;
        }
        else {
            count -=2;
            space++;
        }
        cout << '\n';
    }
      

    return 0;
}









