#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={23,45,19,36,76,34,23,22,36};
    int n=sizeof(arr)/sizeof(arr[0]),a;
    vector<int> v(arr,arr+n);
    sort(arr,arr+n);
    cout<<"Sorted Array:: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\nEnter the number to search:: ";
    cin>>a;
    cout<<"Binary Search in array(Search for "<<a<<"):: ";
    if(binary_search(arr,arr+n,a))
        cout<<"Element Found......."<<endl;
    else
        cout<<"Element not Found......."<<endl;
    cout<<"Displaying Vector:: ";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<"\nReverse vector:: ";
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    sort(v.begin(),v.end());
    cout<<"\nSorted vector:: ";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<"\nMinimum Element of vector:: "<<*min_element(v.begin(),v.end())<<endl;
    cout<<"Maximum Element of vector:: "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Occurance of "<<23<<" in vector:: "<<count(v.begin(),v.end(),23)<<endl;
}