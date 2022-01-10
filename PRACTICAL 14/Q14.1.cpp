#include<iostream>
using namespace std;
class base1
{
    public:
        virtual int add(int a,int b){   return (a+b);   }
        float add(float a,float b) {    return (a+b);   }
        virtual int multi(int a,int b)=0;
};
class base2
{
    public:
     int add(int a,int b){     return a+b+100;     }
};
class child:public base1,public base2
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
    base1 *b1;
    base2 *b2;
    child c;
    b1=&c;                  //RUN TIME-BINDING
    b2=&c;                  //COMPILE TIME-BINDING
    cout<<"Run time binding: "<<b1->add(1,2)<<endl;
    cout<<"Compile time binding: "<<b2->add(1,2)<<endl;
    return 0;
}
