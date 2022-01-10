#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    printf("Enter the number of element: ");
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    } 
    vector<int> :: iterator it;
    cout<<"Vector :: ";
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"Size of Vector:: "<<v.size()<<endl;
    cout<<"Capacity of Vector:: "<<v.capacity()<<endl;
    cout<<"Max Size of Vector:: "<<v.max_size()<<endl;
    cout<<"Vector is Empty or Not(0 or 1):: "<<v.empty()<<endl;
    v.resize(3);
    cout<<"Vector after resizing (Size = 3):: ";
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
}