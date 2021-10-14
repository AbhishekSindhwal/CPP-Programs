#include<iostream>
using namespace std;
int  main(){
	int ar[3][3]={	{1,2,3},
			{4,5,6},
			{7,8,9}
		     };	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<ar[i][j]-(2*i+j);
		}
		cout<<endl;
	}
	return 0;
}
