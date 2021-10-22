#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int *p;
	int **q;
	p = &a;
	q = &p;
	cout<<"Using pointer "<< *p<<endl;
	cout<<"Using pointer to pointer "<<**q<<endl;
	return 0;
}
