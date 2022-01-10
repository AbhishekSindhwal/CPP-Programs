#include<iostream>
using namespace std;

void Divide(int x,int y,int z){
    if(y==0){
        cout<<"Throwing Error from function Divide......."<<endl;
        throw runtime_error("Math error");
    }
    z=x/y;
    cout<<z;
}
int main(){
    int x=3,y=0,z=0;
    try{
        cout<<"Try block Exceution......"<<endl;
        Divide(x,y,z);
    }
    catch(runtime_error& w){
        cout<<"\nCatching the error thrown by function...."<<endl;
        cout<<"Exception Occurs....\n"<<"Due to:: "<<w.what();
    }
}