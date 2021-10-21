#include<iostream>
using namespace std;
void swap(int m,int n)
{
	int temp;
	temp=m;
	m=n;
	n=temp;
	cout<<"Value after swapping:"<<endl;
	cout<<"m:"<<m<<endl<<"n:"<<n<<endl;
	
}
int main()
{
	int n,m;
	cout<<"Enter the value of m and n:";
	cin>>m>>n;
	cout<<"Value before swapping:"<<endl;
	cout<<"m:"<<m<<endl<<"n:"<<n<<endl;
	swap(m,n);
	return 0;
}
