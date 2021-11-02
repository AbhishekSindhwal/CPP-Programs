#include<iostream>
using namespace std;
class College{
    int ns;
    string cname;
public:			//1. Structure is a user-defined data type that combines logically related data items of  types 
    struct Student{		//   like char, different data float, int, etc., together.
        string sname;		//   Class is a blueprint or a set of instructions to build a specific type of object.
        char sec;		//2. A Structure is not secure and cannot hide its implementation details from the end-user
        int rn;		//    while a class is secure and can hide its programming and designing details. 
    }s1;		  
    College(int n,string s){	//3. If access specifier is not declared, by default all member are 'public'.
        ns=n;			//   If access specifier is not declared, by default all members are 'private'.
        cname=s;		//4. For structure memory is allocated on stack and for class is on heap.
    }				//5. Structure cannot inherit it from other structures or classes.
    void print(){		//   Class can inherit it from other structures or classes.
        cout<<"Details of college:"<<endl;
        cout<<"Name of college: "<<cname<<endl;
        cout<<"Number of students: "<<ns<<endl<<endl;
        cout<<"Details of student:"<<endl;
        cout<<"Name of student: "<<s1.sname<<endl;
        cout<<"Section of student: "<<s1.sec<<endl;
        cout<<"Roll number of student: "<<s1.rn<<endl;
    }
};
int main(){
    College c1(1000,"GEHU");
    c1.s1.sname="Abhishek";
    c1.s1.sec='B';
    c1.s1.rn=6;
    c1.print();
}
