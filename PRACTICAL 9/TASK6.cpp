#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    string n="College";
    string a="GEHU";
    cout<<"Name of"<<endl<<n<<endl<<" is "<<a<<endl;
    int k=20;
    cout<<"Value of k before setw: "<<k<<endl;
    cout<<"Value of k after setw: "<<setw(15)<<k<<endl;
    cout<<setw(15)<<setfill('*')<<k<<endl;
    return 0;
}
