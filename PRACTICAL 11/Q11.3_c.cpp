//Other problem due to multiple inheritence .
#include<iostream>
using namespace std;
class parent1
{
    public:
        void c()
        {
            cout<<"Child 1 class."<<endl;
        }
};
class parent2
{
    public:
        void c()
        {
            cout<<"Child 2 class."<<endl;
        }
};
class superChild:public parent1,public parent2
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
    s.c();  //Problem due to multiple inheritence... error request for member 'c' is ambiguos
    return 0;
}

