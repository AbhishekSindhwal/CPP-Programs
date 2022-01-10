#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream Sample1;
    Sample1.open("Sample2.txt",fstream::in | fstream::out | fstream::app);
    string s;
    char c,d;
    int a=2;
    cout<<"Enter the content of file(Two Lines)::"<<endl;
    while(a--){
        getline(cin,s);
        Sample1<<s<<"\n";
    }
    Sample1.seekg (0, Sample1.beg);
    cout<<"\nDisplaying the content of file::"<<endl;
    while(Sample1>>noskipws>>c){
        cout<<c;
    }
    Sample1.close();
    Sample1.open("sample2.txt",fstream::in | fstream::out | fstream::app);
    Sample1.seekg (0, Sample1.end);
    cout<<"\nEnter the content to append in file::"<<endl;
    getline(cin,s);
    Sample1<<s;
    Sample1.seekg (0, Sample1.beg);
    cout<<"\nDisplaying the content of file after append::"<<endl;
    int countc=0,countw=0,countl=1;
    while(Sample1>>noskipws>>c){
        cout<<c;
        if(c!=' '){
            countc++;
            d=c;
        }
        else{
            if(d!=' ')
                countw++;
            d=c;
        }
        if(c=='\n'){
            countl++;
            countw++;
        }
    }
    if(c!=' ')
        countw++;
    cout<<"\n\nTotal number of characters in file(Excluding space):: "<<countc<<endl;
    cout<<"Total number of words in file:: "<<countw<<endl;
    cout<<"Total number of lines in file:: "<<countl;
    Sample1.close();
    return 0;
}
