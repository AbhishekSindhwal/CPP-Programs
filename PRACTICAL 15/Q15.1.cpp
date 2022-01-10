#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream o;
    o.open("abc.txt");
    cout<<"Enter data to write into file."<<endl;
    string str1;
    getline(cin,str1);
    o<<str1;
    o.close();

    ifstream i;
    i.open("abc.txt");
    string str;
    printf("\nReading data from the file: ........\n");
    while(getline(i,str))
    {
        cout<<str<<endl;
    }
    i.close();
    return 0;
}
