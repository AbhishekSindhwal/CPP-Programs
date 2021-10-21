#include<iostream>
using namespace std;
int main()
{
	int *p = {10,20,20};

	cout << *p;

	p++;

	cout << *p;
	return 0;
}
/* This program will give error because
   p is a pointer to a integer and it will accept 
   the address of integer type variable.
*/
