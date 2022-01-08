
//Version 2....
#include<iostream>
using namespace std;
class base
{
public:
    int add(int a,int b)
    {
        return (a+b);
    }
    float add(float a,float b)
    {
         return (a+b);
    }
};
class child:public base
{
public:
    using base:: add;
    int add(int a,int b)
    {
        return (a+b+10);
    }
};

int main()
{
    base b1;
    child c1;
    cout<<b1.add(1,2)<<endl;
    cout<<b1.add(1.2f,1.3f)<<endl;
    cout<<c1.add(1,2)<<endl;        //The shadow of this function is already present in child class.
    cout<<c1.add(1.2f,1.3f);
    return 0;
}
