#include<iostream>
//#include<string>

using namespace std;

class human{
    public:
        static int human_count;


};//we need to inititalize human_count member outside the class
//also outside of the main function before using it in main function
int human::human_count = 0;
//static keyword will tell that how many times a function is used.
int main(){
    cout<<human::human_count;
    return 0;
}