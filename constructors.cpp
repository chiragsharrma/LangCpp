#include<iostream>
#include<string>

using namespace std;
//a constructor is a special method
//it is invoked when initializing the object.
//it used to initialize data members generally. has no return type.
class human{
private:
        string name;
        int age;    
public:
    human(){                                //constructor
         name = "noname";
         age = 0;
         cout <<"constructor is called when u create a obeject of human";
    }
    void displayAge(){
        cout <<  name<<  endl<<  age<<endl;
    }
};
//we can initiliaz private data directly in constructor. but we can not do this in normal public methods.
//if we make constructor block's private then we won't be able to access it in main function.

int main()
{
    human anil;
    anil.displayAge();                          //we can not call constructor manually.they are called automatically in c++.
    return 0;
}