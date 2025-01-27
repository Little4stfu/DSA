#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0;j<n;j++){
            cout<<ch<< " ";
            ch= ch+1;
            // Every charcter have ASCII value so since we start from A which ASCII value is 65 and when we try to add +1 to char then compiler 
            // use typeconversion which means ch+1 make 66 but since ch  is char type so ch+1 should also get converted to char which was 66 before and since it stored on ch character   variable it become B since 66 is ASCII value of B
        }
        cout<<endl;
    }
}