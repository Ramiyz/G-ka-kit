#include <iostream>
using namespace std;

int main() {
	unsigned int p = 60;	 
	unsigned int q = 13;	  
	int z = 0;

	z = p & q;
	cout << "p&q is : " << z << endl; 

	z = p | q;
	cout << "p|q is : " << z << endl; 

	z = p ^ q;
	cout << "p^q is : " << z << endl; 

	z = ~p;
	cout << "~p is : " << z << endl; 

	z = p << 2;
	cout << "p<<2 is: " << z << endl; 

	z = p >> 2;
	cout << "p>>2 is : " << z << endl; 

	return 0;
}


