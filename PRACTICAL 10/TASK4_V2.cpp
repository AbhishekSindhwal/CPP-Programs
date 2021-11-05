#include<iostream>
using namespace std;
class Number{
    public:
        int n;
        Number(int m){
            this->n=m;
        }
};
int operator + (Number &c1,Number &c2){
    return c1.n+c2.n;
}
int main(){
    cout<<"Operator Overloading:"<<endl;
    cout<<"Making '+' operator valid for objects"<<endl<<endl;
    Number n1(2),n2(5);
    Number n3=n1+n2;
    cout<<"Addition of "<<n1.n<<" and "<<n2.n<<" is: "<<n3.n<<endl;
}
