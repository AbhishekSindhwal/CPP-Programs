#include<iostream>
using namespace std;
class Person{
public:
    string name;
    string ad;
    long long tn;
    long long mn;
    string head;
    void print(int i){
        cout<<endl;
        cout<<"Name of "<<i<<" person: "<<name<<endl;
        cout<<"Address of "<<i<<" person: "<<ad<<endl;
        cout<<"Telephone number of "<<i<<" person: "<<tn<<endl;
        cout<<"Mobile number of "<<i<<" person: "<<mn<<endl;
        cout<<"Head of family of "<<i<<" person: "<<head<<endl;
        cout<<endl;
    }
};
int main(){
    Person s[2];
    for(int i=0;i<2;i++){
        cout<<"Enter the name of "<<i+1<<" person : ";
        cin>>s[i].name;
        cout<<"Enter the address of "<<i+1<<" person: ";
        cin>>s[i].ad;
        cout<<"Enter the telephone number of "<<i+1<<" person: ";
        cin>>s[i].tn;
        cout<<"Enter the mobile number of "<<i+1<<" person: ";
        cin>>s[i].mn;
        cout<<"Enter the head of family of "<<i+1<<" person: ";
        cin>>s[i].head;
    }
    for(int i=0;i<2;i++){
        s[i].print(i+1);
    }
}
