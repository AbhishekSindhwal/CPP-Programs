#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<int,string> m1;
    int a;
    string s;
    cout<<"Enter the keys and its values in map 1::"<<endl;
    for(int i=0;i<4;i++){
        scanf("%d",&a);
        getline(cin,s);
        m1.insert({a,s});
    }
    map<int,string> :: iterator it;
    cout<<"Displaying Map 1::\n";
    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"\nAssigning the Element of map 1 to map 2......";
    map<int,string> m2(m1.begin(),m1.end());
    cout<<"\nDisplaying Map 2::\n";
    for(it=m2.begin();it!=m2.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"\nEnter key to found and to delete(erase):: ";
    cin>>a;
    it=m1.find(a);
    if(it!=m1.end()){
        cout<<"Key found!...\n";
        cout<<"Key Deleted!......"<<m1.erase(a)<<"\n";
    }
    else
        cout<<"Key not found!...\n";
    cout<<"Size of Map1:: "<<m1.size()<<endl;
    cout<<"Max Size of Map1:: "<<m1.max_size()<<endl;
    cout<<"Clearing the Map1....\n";
    m1.clear(); 
    if(m1.empty()){
        cout<<"Map1 is Empty....."<<endl;
    }
    else{
        cout<<"Map1 is not Empty......"<<endl;
    }
}