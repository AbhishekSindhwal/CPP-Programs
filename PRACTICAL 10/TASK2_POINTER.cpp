#include<iostream>
using namespace std;
class Person{
    string name;
    char ad;
    long long mn;
public:
    void setA(int i){
        cout<<"Enter the name of "<<i+1<<" person : ";
        cin>>this->name;
        cout<<"Enter the Section of "<<i+1<<"person: ";
        cin>>this->ad;
        cout<<"Enter the mobile number of "<<i+1<<"person:";
        cin>>this->mn;
    }
    void print(int i){
        cout<<endl;
        cout<<"Name of "<<i<<" person: "<<name<<endl;
        cout<<"Section of "<<i<<" person: "<<ad<<endl;
        cout<<"Mobile number of "<<i<<"person: "<<mn<<endl;
        cout<<endl;
    }
};
int main(){
    Person s1,s2;
    Person *p1=&s1,*p2=&s2;
    p1->setA(0);
    p2->setA(1);
    p1->print(1);
    p2->print(2);
}
