#include<iostream>
using namespace std;
class parent{
    public:
        int k;
        void display(){
            cout<<"Value of k is : "<<k<<endl;
        }
};
class child:public parent{
    public:
    void display2(){
        cout<<"Value of k is : "<<k<<endl;
        display();
    }

};
int main(){
    child c1;
    c1.k=5;
    c1.display();
    c1.display2();
    return 0;
}
