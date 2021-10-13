#include<iostream>
using namespace std;
int main(){
	int ar[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"Before reverse:"<<endl;
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"After reverse:"<<endl;
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<10-ar[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
