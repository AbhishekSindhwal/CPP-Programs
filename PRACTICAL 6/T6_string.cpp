#include<iostream>
using namespace std;
int main()
{
	string s="Hello";
	cout<<s<<endl;
	s[0]='J';
	cout<<s<<endl;
	if(s=="Jello")
	{
		cout<<"Strings are mutable in C++"<<endl;
	}
	else
	{
		cout<<"Strings are not mutable in C++"<<endl;
	}
	return 0;
}
