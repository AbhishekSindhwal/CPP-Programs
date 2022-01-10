#include<iostream>
using namespace std;
int main(){
    try{
        throw 'a';
    }
    catch(int a){
        cout<<"Caught"<<a;
    }
    catch(...){
        cout<<"Default Exception\n";
    }
    return 0;
}