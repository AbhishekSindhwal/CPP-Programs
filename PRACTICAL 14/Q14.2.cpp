#include<iostream>
using namespace std;
class base1
{
    public:
    ~base1()
    {
        cout<<"Base 1 class destructor."<<endl;
    }

};
class base2
{
    public:
    virtual ~base2()
    {
        cout<<"Base 2 class destructor."<<endl;
    }
};
class child:public base1,public base2
{
    public:
    ~child()
    {
        cout<<"Child class destructor."<<endl;
    }
};
int main()
{
    child obj;
    base1 * ptr=&obj;
    base2 *p=&obj;
    cout<<"Calling base 1 destructor: ";
    ptr->~base1();
    cout<<"Calling Child destructor and then Base 2 destructor: ";
    p->~base2();
    cout<<endl;
    return 0;
}
