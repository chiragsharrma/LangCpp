#include<iostream>
using namespace std;


//when type of data are not same use struct.
typedef struct employee
{
    int eid;    
    char favchar;
    float salary;

} ep; //...now i can use word ep instead of using struct.

union money      //..in union we can only use the one data member at a time. if we set another data member than it will overwrite 
{       int rice;         //..the previous one.
        char car;
        int pound;
};
        

int main(){   
    union money m1;
    m1.rice= 34;                     //first used thii
    m1.pound = 66;                   //now pound has been set so its 66 overwrited on 34.
    cout << m1.rice<<endl;
    cout <<m1.pound<<endl;

    enum meal{lunch,breakfast,dinner};   //now that enum allocates 0,1,2 values to the parameters.and makes meal a data type.
    meal m1 = lunch;                    
    meal m2 = breakfast;
    meal m3 = dinner;
        cout << m1 << endl;
        cout << m2 << endl ;
        cout << m3 <<endl;

    struct employee harry;              //..created object harry to the structure named employee
    harry.eid = 1;
    harry.favchar = 'c';
    harry.salary = 15000000;
    cout << "the value is "<< harry.eid<<endl;
    cout<<"the value is "<< harry.favchar<<endl;
    cout<<"the value is "<< harry.salary<<endl;  

    return 0;
}   //enum allocates 0,1,2 to the parameter, union houses data that gets overwrited and we can access only one at a time.
    //structure have diff type of data and we can access all of them simulteneously. enum and union also has diff type of data.