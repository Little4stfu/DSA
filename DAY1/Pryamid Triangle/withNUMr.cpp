#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j< n-i-1;j++)
        {
           cout<<" ";
        }

        for(int j=0; j<=i ; j++){
        cout<<j+1;
        }
        for(int j=i; j>=1; j--)
        {
            cout<<j;
    
        }
        // so here at last  loop we make the  lowest point 1 so when we have i=0 then  j will be also 0. let's jump when  i = 2 and j will be also 2 so we print first 2 but since the conditioni say j   is  greater and equal to  1 it will automatically run one time when j  value will be 1
        // when i = 3 j will be  also 3  so we start printing 3 first and j will be minus to 2 but the condtition says j>=1  and when j value is 2 the condition will be true  so we will print 2  after 2 and j will again -- and become 1 and check condition which is  true and we print 1 and again j will be 0 check   condtion hwich will make false so it terminate 

    cout<<endl;
    }


}