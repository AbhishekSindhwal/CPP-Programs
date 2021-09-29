#include<iostream>
using namespace std;
namespace first{
	int sum(int a,int b){
		int s=a+b;
		cout<<"(calling first namespace)"<<endl;
		return s;
	}
}
namespace second{
	float sum(float a,float b){
		float s=a+b;
		cout<<"(calling first namespace)"<<endl;
		return s;
	}
}
int main(){
	cout<<sum(5,6)<<endl;
	cout<<sum(5.12,6.21)<<endl;
	
	cout<<sum(5.12,6)<<endl;
	cout<<sum(5,6.21)<<endl;
	
	cout<<sum(5.00,6.012)<<endl;
	cout<<sum(5.00,6.00)<<endl;
return 0;
}
