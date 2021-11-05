#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
    int year;
    char sec;
    int marks;
    void setValues(string a,char b,int c,int d){
        name=a;
        sec=b;
        age=c;
        marks=d;
    }
};
int main()
{
    Student s[3];
    for(int i=0;i<3;i++)
    {
    	string name;char sec;int age=0,marks=0;
    	cout<<"Enter  name of "<<i+1<<" student: ";
    	cin>>name;
    	cout<<"Enter sec:"; 
    	cin>>sec;
    	cout<<"Enter age:";
    	cin>>age;
    	cout<<"Enter marks:";
    	cin>>marks;
        s[i].setValues(name,sec,age,marks);
    }
    int tmarks=0;
    for(int i=0;i<3;i++){
    	cout<<"\nName of"<<i+1<<" student is :"<<s[i].name;
    	cout<<"\nSec:"<<s[i].sec;
    	cout<<"\tAge:"<<s[i].age;
    	cout<<"\tMarks:"<<s[i].marks;
    	tmarks+=s[i].marks;
    }
    cout<<"\nTotal marks of students is: "<<tmarks;
    return 0;
}
