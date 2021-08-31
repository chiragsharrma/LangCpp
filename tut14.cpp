#include<iostream>
using namespace std;


//when type of data are not same use struct.
typedef struct employee
{
    int eid;    
    char favchar;
    float salary;

} ep;  //...now i can use word ep instead of using struct.

union money      //..in union we can only use the one data member at a time. if we set another data member than it will overwrite 
{       int rice;         //..the previous one.
        char car;
        int pound;
};



int main(){
    //struct employee harry;                  //..created object harry to the structure named employee
    union money m1;
    m1.rice= 34;
   /* cout << m1.rice<<endl;
    harry.eid = 1;
    harry.favchar = 'c';
    harry.salary = 15000000;
    cout << "the value is "<< harry.eid<<endl;
    cout<<"the value is "<< harry.favchar<<endl;
    cout<<"the value is "<< harry.salary<<endl;  */

    return 0;
}