//Diamond problem solution.
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
class child1:virtual public parent  //Virtual keyword used to solve diamond problem.
{
    public:
        void c()
        {
            cout<<"Child 1 class."<<endl;
        }
};
class child2:virtual public parent  //Virtual keyword used to solve diamond problem.
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
    superChild s;
    s.p();
    return 0;
}
