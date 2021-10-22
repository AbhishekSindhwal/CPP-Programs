#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int *p;
	int **q;
	p = &a;
	q = &p;
	cout<<"Before changing value: "<< *p<<endl;
	**q=16;
	cout<<"After changing value: "<<**q<<endl;
	return 0;
}
