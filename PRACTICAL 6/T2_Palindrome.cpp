#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string str,str1;
	cout<<"Enter a string:\n";
	getline(cin,str);
	for(int i=str.size()-1;i>=0;i--)
	{
			str1.push_back(str[i]);
	}
	if(str==str1)
	{
		cout<<"String is palindrome.";
	}
	else{
		cout<<"String is not palindrome.";
	}
	return 0;
}
