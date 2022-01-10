#include<iostream>
using namespace std;

int main(){
    int y=0,x=5,z=0;
    try{
        cout<<"Try block Exceution......"<<endl;
        if(y==0){
            cout<<"Throwing Error......."<<endl;
            throw runtime_error("Math error");
        }
        z=x/y;
        cout<<z;
    }
    catch(runtime_error& w){
        cout<<"\nCatching the error...."<<endl;
        cout<<"Exception Occurs....\n"<<"Due to:: "<<w.what();
    }
}