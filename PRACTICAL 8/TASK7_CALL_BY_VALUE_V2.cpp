#include<iostream>
using namespace std;
void swap(int &m,int &n)
{
	int temp;
	temp=m;
	m=n;
	n=temp;
}
int main()
{
	int n,m;
	cout<<"Enter the value of m and n:";
	cin>>m>>n;
	cout<<"Value before swapping:"<<endl;
	cout<<"m:"<<m<<endl<<"n:"<<n<<endl;
	swap(m,n);
	cout<<"Value after swapping:"<<endl;
	cout<<"m:"<<m<<endl<<"n:"<<n<<endl;
	return 0;
}
/*
	In this case the will get swap because the
	address of variable is passed to the function 
	so the changes that are made with in the 
	swap function will reflect in the main function.
*/
