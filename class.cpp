#include<iostream>
#include<string>

using namespace std ;
class humanbeing{
    public:
    string name;
    void introduce(){
        cout <<" hi i am " << name<<endl;
    }
} ;


int main()
{
    humanbeing anil;
    anil.name = "anil.";
    anil.introduce();

    humanbeing anjali;
    anjali.name = "anjali.";

    anjali.introduce();

    return 0;
}