#include<iostream>
using namespace std;
namespace first{
	void saysomething(string a){
		cout<<a<<endl;
	}
}
namespace second{
	void saysomething(string a){
		cout<<a<<endl;
	}
}
using namespace first;
using namespace second;
int main(){
	cout<<saysomething("Hello")<<endl;
	cout<<saysomething("world");
return 0;
}
