#include<iostream>
using namespace std;
int main(){
	int arr[] = {10,20,30};

	cout << *arr;

	cout << arr;

	arr++;

	cout << *arr;
	return 0;
}
/*
	This program will show error because 
	arr is not a pointer type of variable.
*/
