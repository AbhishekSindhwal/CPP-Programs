#include<iostream>
using namespace std;
void swap(int *s,int *b){
    int temp=*s;
    *s=*b;
    *b=temp;
}
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Matrix Before reversing:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int b=1,n=3;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(i==1 && j==1){
                b=0;
                break;
            }
            swap(&a[i][j],&a[n-1-i][n-1-j]);
        }
        if(b==0){
           break;
        }
    }
    cout<<"Matrix After reversing:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
