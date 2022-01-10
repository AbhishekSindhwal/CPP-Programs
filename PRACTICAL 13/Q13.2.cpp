#include<iostream>
using namespace std;
class base                                  //Abstract Class
{
    public:
        virtual int add(int a,int b)        // Virtual Function
        {
            return (a+b);
        }
        float add(float a,float b)
        {
            return (a+b);
        }
        virtual int multi(int a,int b)=0;   //Pure Virtual Function---Due to presence of this function this class become abstract class.
};
class child:public base
{
    public:
    int add(int a,int b)
    {
        return (a+b+10);
    }
    int add (float a,float b)
    {
        return (a+b);
    }
    int multi(int a,int b)
    {
        return (a*b);
    }
};
int main()
{
    base *b;
    child c;
    b=&c;
    cout<<c.add(1,2)<<endl;
    cout<<b->add(1,2)<<endl;
    cout<<b->multi(10,5)<<endl;
    return 0;
}
