#include<iostream>
#include<ios>
#include<iomanip>
#include<sstream>
using namespace std;
int main(){
    int a=34;
    cout<<"Value of a in Decimal Base(10):: "<<dec<<a<<endl;
    cout<<"Value of a in Hexadecimal Base(16):: "<<hex<<a<<endl;
    cout<<"\""<<"Number is:: "<<a<<ends<<"\""<<endl;
    cout<<"Flushing the output console......"<<endl;
    cout.flush();
    double num=23.453246547565;
    cout<<"Printing value using setw(10):: "<<setw(10)<<num<<endl;
    cout<<"Printing value using setprecision(10):: "<<setprecision(10)<<num<<endl;
    char x,y,z,a1,b1,c1;
    istringstream s1("  Abh");
    s1>>skipws>>x>>y>>z;
    cout<<"String with skipws:: "<<x<<y<<z<<endl;
    istringstream s2("  Abh");
    s2>>noskipws>>a1>>b1>>c1;
    cout<<"String with noskipws:: "<<a1<<b1<<c1<<endl;
    istringstream ss("Welcome\n to\t GEHU");
    char x1[10],y1[10],z1[10];
    ss>>x1>>ws>>y1>>ws>>z1;
    cout<<"String using (ws):: "<<x1<<","<<y1<<","<<z1<<endl;
    return 0;
}
