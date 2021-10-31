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
    sam.Assign(3,6772697489,"Delhi");
    john.Assign(7,5463749509,"Dehradun");
    sam.print("Sam");
    cout<<endl;
    john.print("John");
    return 0;
}
