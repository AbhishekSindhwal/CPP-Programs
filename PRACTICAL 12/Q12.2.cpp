#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    base(int x)
    {
        a=x+10;
        cout<<"Base class constructor is called. "<<endl;
    }
    ~base()
    {
        cout<<"Base class destructor is called. "<<endl;
    }
    void display1()
    {
        cout<<"Value of element in child class is : "<<a<<endl;
    }
};
class child:public base
{
    public:
    int b;
    child(int x):base(x)               //Passing elements to base class using derived class constuctor.
    {
        b=x+10;
        cout<<"Child class constructor is called. "<<endl;
    }
    ~child()
    {
        cout<<"Child class destructor is called. "<<endl;
    }
    void display2()
    {
        cout<<"Value of element in child class is : "<<b<<endl;
    }

};
class superChild:public child
{
    public:
    int c;
    superChild(int x):child(x)          //Passing elements to base class using derived class constuctor.
    {
        c=x+10;
        cout<<"Superchild class constructor is called. "<<endl;
    }
    ~superChild()
    {
        cout<<"Superchild class destructor is called. "<<endl;
    }
    void display3()
    {
        cout<<"Value of element in child class is : "<<c<<endl;
    }

};
int main()
{
    superChild s1(10);
    cout<<endl;
    s1.display1();
    s1.display2();
    s1.display3();
    cout<<endl;
    return 0;
}
