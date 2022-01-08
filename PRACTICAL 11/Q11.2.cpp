#include<iostream>
using namespace std;
class mammals{
    public:
    void display1(){
        cout<<"I am a mammal."<<endl;
    }
};
class marineAnimal{
    public:
    void display2(){
        cout<<"I am a marine animal."<<endl;
    }
};
class blueWhale: public mammals,public marineAnimal
{
    public:
    void display3(){
        cout<<"I belong to both categories: Mammal as well as Marine animal."<<endl;
    }
};

int main(){
    mammals m;
    marineAnimal ma;
    blueWhale b;
    m.display1();
    ma.display2();
    b.display3();
    b.display2();
    b.display3();
    return 0;
}