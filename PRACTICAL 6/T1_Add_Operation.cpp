#include<iostream>
using namespace std;
int main(){
	int a=5,b=7;
	float c=4.2,d=3.5;
	string e="Graphic",f=" Era";
	
	cout<<"Both int : "<<a+b;
	cout<<"\nBoth float: "<<c+d;
	cout<<"\nBoth string: "<<e+f;
	cout<<"\nOne int one float: "<<a+c;
	
	cout<<"One float one string: "<<c+e;  
	cout<<"One int one string: "<<a+e;
	
	return 0;
}
