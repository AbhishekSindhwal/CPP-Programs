#include<iostream>
using namespace std;
void print_series(int n)
{ 
    if(n==1)
    {
        cout<<"2";
        return;
    }
    else
        print_series(n-1);
        
    cout<<",("<<n<<"^"<<n<<"+"<<n<<")";
}


int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	print_series(n);
	return 0;
}
