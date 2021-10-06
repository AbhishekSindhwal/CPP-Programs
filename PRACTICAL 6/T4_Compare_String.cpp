#include<iostream>
using namespace std;
int main(){
	string str1,str2;
	cout<<"Enter string 1:";
	getline(cin,str1);
	cout<<"Enter string 2:";
	getline(cin,str2);
	if(str1==str2)
	{
		cout<<"Strings are same.";
	}
	else
	{
		cout<<"Strings are not same.";
	}
	return 0;
}
