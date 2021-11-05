#include<iostream>
using namespace std;
class Rem{
    int a;
    int b;
    int rem;
public:
    Rem(int a,int b){
        this->a=a;
        this->b=b;
        this->rem=a%b;
    }
    int getA(){
        return this->a;
    }
    int getB(){
        return this->b;
    }
    int get(){
        return this->rem;
    }
};
int main(){
    Rem s(5,2);
    cout<<"Remainder of "<<s.getA()<<" and "<<s.getB()<<" is: "<<s.get()<<endl;
}
