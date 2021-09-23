#include<iostream>
using namespace std;
int check_prime(int n){
	if(n==2)
		return 1;
	if(n==1||n%2==0)
		return 0;
	for(int i=3;i*i<=n;i+=2)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	if(check_prime(n))
	{
		cout<<n<<" is prime no.";
	}
	else
	{
		cout<<n<<" is not a prime no.";
	}
	return 0;
}
