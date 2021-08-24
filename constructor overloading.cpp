#include<iostream>
#include<string>

using namespace std;

class human{
    private :
        string name;
        int age;
    public:
        human(){
           cout<<"default constructor"<<endl;
         age = 0;
            name = "noname";
        }    
        human(string iname){
            cout<<"overloading default constructor with parameter"<<endl;
            age = 0;
            name = iname;
      }
        human(int iage){
            cout <<"overloading default constructor with parameter"<<endl;
            age = iage;
            name = "noname";
        }
        human(string iname ,int iage){
            cout<<"overloading default constructor with both parameter"<<endl;
            age = iage;
            name = iname;                           //specifying constructor with some parameters is called overloading the constructors
        }
        void display(){
            cout << name<<endl<<age<<endl;
        }


};

int main()
{
    human anil;
    anil.display();
    human andy("andy");
    andy.display();
   human liam("stock" , 10);    //passing both parameter string and int.
    liam.display();                 //calling display function.
    return 0;
}