#include<iostream>
using namespace std;
class Area{
public:
    int FindArea(int l,int b){
        return l*b;
    }
    int FindArea(int a){
        return a*a;
    }
};
int main(){
    Area r,s;
    int l,b,side;
    cout<<"\nEnter lenth and bredth of rectangle: ";
    cin>>l>>b;
    cout<<"\nEnter side of square: ";
    cin>>side;
    cout<<"\nArea of rectangle: "<<r.FindArea(l,b)<<endl;
    cout<<"\nArea of square: "<<s.FindArea(side)<<endl;
}
