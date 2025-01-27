#include<iostream>
using namespace std;
int  main(){
    int n=4;
    int num=1;
    cout<<"Triangle  with number:"<<endl;
    for(int i=0;i<n;i++)
    {  

        for(int j=i+1;j>0;j--){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
    cout<<"Triangle with Character:"<<endl;
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}