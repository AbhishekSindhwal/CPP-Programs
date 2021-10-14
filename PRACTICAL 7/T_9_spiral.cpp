#include<iostream>
using namespace std;
int  main(){
	int ar[5][4]={	{01,02,03,04},
			{05,06,07,8},
			{9,10,11,12},
			{13,14,15,16},
			{17,18,19,20}
		     };	
	int tpr=0,tpc=0,br=4,bc=3;
	while(tpr<=br||tpc<=bc)
	{
		for(int i=tpr;i<=bc;i++)
		{
			cout<<ar[tpr][i]<<" ";
		}
		tpr++;
		for(int i=tpr;i<=br;i++)
		{
			cout<<ar[i][bc]<<" ";
		}
		bc--;
		for(int i=bc;i>=tpc;i--)
		{
			cout<<ar[br][i]<<" ";
		}
		br--;
		for(int i=br;i>=tpr;i--)
		{
			cout<<ar[i][tpc]<<" ";
		}
		tpc++;
		//cout<<endl;
	}
	return 0;
}
