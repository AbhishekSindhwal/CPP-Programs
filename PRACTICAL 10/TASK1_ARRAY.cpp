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
        cout<<"Name of  person: "<<name<<endl;
        cout<<"Address of  person: "<<ad<<endl;
        cout<<"Telephone number of  person: "<<tn<<endl;
        cout<<"Mobile number of person: "<<mn<<endl;
        cout<<"Head of family of person: "<<head<<endl;
        cout<<endl;
    }
};
int main(){
    Person s[2];
    for(int i=0;i<1;i++){
        cout<<"Enter the name of person : ";
        cin>>s[i].name;
        cout<<"Enter the address of  person: ";
        cin>>s[i].ad;
        cout<<"Enter the telephone number of  person: ";
        cin>>s[i].tn;
        cout<<"Enter the mobile number of  person: ";
        cin>>s[i].mn;
        cout<<"Enter the head of family of  person: ";
        cin>>s[i].head;
    }
    for(int i=0;i<1;i++){
        s[i].print(i+1);
    }
}
