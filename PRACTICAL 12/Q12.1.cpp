#include<iostream>
using namespace std;
class base
{
        int a;
    protected:
        int c;
    public:
        int b;
        void display()
        {
            cout<<"Class base."<<endl;
        }
};
class child1:public base
{
        int a1;
    protected:
        int c1;
    public:
        int b1;
    void display1()
    {
        //a=5;  This gives error because a is private variable.
        b=06;
        c=05;
        cout<<"In child class(inherited in public mode."<<endl;
        cout<<"Public Variable of base:"<<b<<"  Portected variable of base:"<<c<<endl;
    }
};
class child2:protected base
{
        int a2;
    protected:
        int c2;
    public:
        int b2;
    void display2()
    {
        //a=10; This gives error because a is private variable.
        b=12;
        c=14;
        cout<<"In child class(inherited in protected mode."<<endl;
        cout<<"Public Variable of base:"<<b<<"  Portected variable of base:"<<c<<endl;
    }
};
class child3:private base
{
        int a3;
    protected:
        int c3;
    public:
        int b3;
    void display3()
    {
        //a=20; This gives error because a is private variable.
        b=16;c=24;
        cout<<"In child class(inherited in private mode."<<endl;
        cout<<"Public Variable of base:"<<b<<"  Portected variable of base:"<<c<<endl;
    }
};
class sub_child2:public child2
{
        int a4;
    protected:
        int c4;
    public:
        int b4;
        void display4()
        {
            b=20;c=40;
            cout<<"In sub child class(inherited in public mode."<<endl;
            cout<<"Public Variable of base:"<<b<<"  Portected variable of base:"<<c<<endl;
        }

};
int main()
{
    base b;
    child1 c1;
    child2 c2;
    child3 c3;
    sub_child2 s1;
    //c2.a2=5;                Cannot be accessed due to protected access modifier.
    //c3.a3=5;                Cannot be accessed due to private access modifier.
    //c2.display();           Cannot be accessed due to protected access modifier.
    //c3.display();           Cannot be accessed due to private access modifier.
    s1.display2();
    c1.display1();
    c2.display2();
    c3.display3();
    s1.display4();
    return 0;
}
