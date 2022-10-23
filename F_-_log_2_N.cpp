  // C++ program to find log(n) using Recursion
#include <iostream>
using namespace std;

unsigned int Log2n(unsigned int n)
{
	return (n > 1) ? 1 + Log2n(n / 2) : 0;
}

// Driver code
int main()
{
	unsigned int n;  cin>>n;
	cout << Log2n(n);
	getchar();
	return 0;
}

// This code is contributed by kirti
 

 