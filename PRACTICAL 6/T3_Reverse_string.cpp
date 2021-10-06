#include<iostream>
#include<algorithm>
using namespace std;
void reverse_str(string str){
	string str1;
	for(int i=str.size()-1;i>=0;i--){
		str1.push_back(str[i]);
	}
	cout<<"\nString after reverse";
	cout<<"(user defined function): "<<str1;
}
int main(){
	string str;
	cout<<"Enter a string: ";
	getline(cin,str);
	reverse_str(str);
	reverse(str.begin(),str.end());
	cout<<"\nString after reverse";
	cout<<"(in-built function): "<<str;
	return 0;
}
