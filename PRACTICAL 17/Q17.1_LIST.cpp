#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> List;
    int n,a;
    cout<<"Enter the total number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        List.push_back(a);
    }
    cout<<"Size of List: "<<List.size()<<endl;
    cout<<"List Before Reversing: ";
    for(list<int> :: iterator it=List.begin();it!=List.end();it++){
        cout<<*it<<" ";
    }
    List.reverse();
    cout<<"\nList After Reversing: ";
    for(list<int> :: iterator it1=List.begin();it1!=List.end();it1++){
        cout<<*it1<<" ";
    }
    List.sort();
    cout<<"\nSorted List: ";
    for(list<int> :: iterator it2=List.begin();it2!=List.end();it2++){
        cout<<*it2<<" ";
    }
    return 0;
}