#include<iostream>
using namespace std;
int main()
{
	cout<<"1. YEAR\t 2. MONTH\t 3. DAY"<<endl;
	int c;
	cin>>c;
	switch(c){
		case 1:cout<<"YEAR-2021"<<endl;
			break;
		case 2:cout<<"MONTH-OCTOBER"<<endl;
			break;
		case 3:cout<<"DAY-13"<<endl;
			break;
		default: cout<<"INVALID CHOICE ";
	}
	return 0;

}
