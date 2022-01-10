#include<iostream>
using namespace std;
template <typename T>
T Add(T x,T y)
{
    return x+y;
}
int main()
{
    cout<<"Addtion of two intgers(return type also int): "<<Add<int>(3,5)<<endl;
    cout<<"Addition of one int and one float(return type double): "<<Add<double>(4,2.1)<<endl;
    return 0;
}
