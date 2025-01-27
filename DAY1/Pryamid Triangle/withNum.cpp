#include<iostream>
using namespace std;
int main(){
    int n=4;

    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        int num=1;
        for(int j=0; j<=i; j++){
            cout<<num;
            num++;
        }
        num=num-2;
        for(int j=0;j<i; j++){
            cout<<num;
            num--;
        }

        cout<<endl;
    }
}  

/* output
    1
   212
  32123
 4321234
*/



/* What happen on  that code
lets  do first half  of code

   1
  21
 321
4321

so here 
line = 4 //lets line  be  n=4 and we know rows are define by outer loop for example the value of i will be 1 at first row 
space on first line is 3 which means the number of space is n-i

    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
    
    we print space lesser than the value of i and 
            
        int num=1;
        we initalize the num value to 1
        for(int j=0; j<=i; j++){
            cout<<num;
            we print one first and then upgrade the  value
            num++;
        } 

from which we get this pattern
   1
  21
 321
4321 
so for second half
2
23
234
        num=num-2;
        we do this to  start from second last number
        for(int j=0;j<i; j++){
            cout<<num;
            num--;
        }

    maaf kardo hami samaj meh nahi aaya meryako vhi 



    i was tryinng to make smth like this  
       1
      121
     12321
    1234321

    i will make this on next one 
    

        


*/























*/

