#include <iostream>
using namespace std;
class Student{
    int n;
    long long pn;
    string address;
public:
    void Assign(int a,long long b,string s){
        n=a;
        pn=b;
        address=s;
    }
    void print(string s){
        cout<<"Details of "<<s<<endl;
        cout<<"Roll number: "<<n<<endl;
        cout<<"Phone number: "<<pn<<endl;
        cout<<"Address : "<<address<<endl;
    }
};
int main()
{
    Student sam,john;
    sam.Assign(56,9875462310,"Dehradun");
    john.Assign(27,1236549870,"Dehradun");
    sam.print("Sam");
    cout<<endl;
    john.print("John");
    return 0;
}
