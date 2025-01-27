#include<iostream>
using namespace std;
int main(){
    int n=3;
    int num=1;
    cout<<"Pattern for Numbers: "<<endl;
    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
    cout<<"Patterns for Characters: "<<endl;
    char ch='A';
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            cout<<ch<< " ";
            ch=ch+1;
        }
        cout<<endl;
    }
}
