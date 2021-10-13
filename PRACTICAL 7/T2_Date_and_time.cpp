#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	cout<<"1. YEAR\t 2. MONTH\t 3. DAY"<<endl;
	int c;
	cin>>c;
	time_t ttime = time(0);
	tm *a=localtime(&ttime);

	switch(c){
		case 1:cout<<"YEAR-"<<a->tm_year+1900<<endl;
			break;
		case 2:cout<<"MONTH-"<<a->tm_mon+1<<endl;
			break;
		case 3:cout<<"DAY-"<<a->tm_mday<<endl;
			break;
		default: cout<<"INVALID CHOICE ";
	}
	return 0;

}
	
