#include<iostream>
using namespace std;
int main(){
int n=4;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			if(i+j==0||i+j==1||i+j==2)
				cout<<" ";
		else
			cout<<"*";
		
		}
		cout<<endl;
	}
	return 0;
}
