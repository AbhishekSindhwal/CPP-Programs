#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s1,s2;
	int x;

	cout<<"Enter string 1: ";
	cin>>s1;
	
	cout<<"Enter string 2: ";
	cin>>s2;

	x=s1.compare(s2);

	cout<<"Value of X is :"<<x<<endl;

	return 0;
}
