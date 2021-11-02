#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    int marks;
    public:
        Student(string s,int a,int m){
            name=s;
            age=a;
            marks=m;
        }
        friend void Add(Student m);
};
int sum=0;
int c;
void Add(Student m){
    c++;
    sum=sum+m.marks;
};
int main(){
    Student s1("Abhishek",18,95);
    Student s2("Aman",18,96);
    Student s3("Ram",18,99);
    Add(s1);
    Add(s2);
    Add(s3);
    cout<<"Total sum of marks of "<<c<<" students is: "<<sum<<endl;
}
