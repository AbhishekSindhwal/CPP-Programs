//Diamond problem at line 39.
#include<iostream>
using namespace std;
class parent
{
    public:
        void p()
        {
            cout<<"Parent class. "<<endl;
        }
};
class child1:public parent
{
    public:
        void c()
        {
            cout<<"Child 1 class."<<endl;
        }
};
class child2: public parent
{
    public:
        void c2()
        {
            cout<<"Child 2 class."<<endl;
        }
};
class superChild:public child1,public child2
{
    public:
        void s()
        {
            cout<<"Super child."<<endl;
        }
};
int main()
{
    superChild s1;
    s1.p();         //Diamond problem....error: request for member 'p' is ambiguous .
    return 0;
}
