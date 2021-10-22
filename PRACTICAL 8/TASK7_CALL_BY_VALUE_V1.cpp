#include<iostream>
using namespace std;
void swap(int m,int n)
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
/*	In this case the values a and b did not
	swap because the changes that are made in
	swap function are local to that function
	i.e changes will not reflect in the main
	function.
*/ 

