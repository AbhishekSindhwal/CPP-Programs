#include<iostream>
using namespace std;
namespace first{
	int sum(int a,int b){
		int s=a+b;
		return s;
	}
}
namespace second{
	float sum(float a,float b){
		float s=a+b;
		return s;
	}
}
int main(){
	cout<<"INEGER SUM(calling first namespace):"<<sum(5,6)<<endl;
	cout<<"FLOATING POINT NUMBER SUM (calling first namespace):"<<sum(5.234,6.2124);

return 0;
}
