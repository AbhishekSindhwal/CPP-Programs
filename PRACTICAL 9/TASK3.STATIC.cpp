#include<iostream>
using namespace std;
class student{
    public:
        static int a;
        student(int b){
            a++;
        }
};
int student::a=0;
int main(){
    student s1(9),s2(6),s3(5),s4(9);
    cout<<"Total number of calls for a members function: "<<student::a<<endl;
}
