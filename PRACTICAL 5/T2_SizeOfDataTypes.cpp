#include<iostream>
using namespace std;
int main()
{
    int a=10;
    float b=10.16;
    char c='A';
    bool d=true;
    long e=1345644;
    short f=1;
    double g=4.45456;
    double h=345.9876;
    wchar_t i='B';
    
    cout<<"Size of Int: "<<sizeof(int)<<endl;
    cout<<"Size of Integer a: "<<sizeof(a)<<endl;
    cout<<"Size of Float: "<<sizeof(float)<<endl;
    cout<<"Size of Float b: "<<sizeof(b)<<endl;
    cout<<"Size of Char: "<<sizeof(char)<<endl;
    cout<<"Size of Character c: "<<sizeof(c)<<endl;
    cout<<"Size of Bool: "<<sizeof(bool)<<endl;
    cout<<"Size of Boolean d: "<<sizeof(d)<<endl;
    cout<<"Size of Long: "<<sizeof(long)<<endl;
    cout<<"Size of Long e: "<<sizeof(e)<<endl;
    cout<<"Size of Short: "<<sizeof(short)<<endl;
    cout<<"Size of Short f: "<<sizeof(f)<<endl;
    cout<<"Size of Double: "<<sizeof(double)<<endl;
    cout<<"Size of Double g: "<<sizeof(g)<<endl;
    cout<<"Size of Long double: "<<sizeof(long double)<<endl;
    cout<<"Size of Long double h: "<<sizeof(h)<<endl;
    cout<<"Size of Wide Char: "<<sizeof(wchar_t)<<endl;
    cout<<"Size of Wide Char i: "<<sizeof(i)<<endl;
    return 0;
}
