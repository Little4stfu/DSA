#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int n=4;
    for(int i=0;i < n; i++){
        for(int j=0; j < i; j++){
            cout<<" ";
        }
        for(int  j=0; j< n-i; j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
}