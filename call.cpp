#include<iostream>
using namespace std;

void swapPointer(int* a ,int* b);   //prototyped the function.
//CALL BY REFERENCE.
int main(){
    int x= 44, y= 46;
    cout<<"enter the value of x "<<x<<" enter the value of y "<<y<<endl;
    swapPointer(&x, &y);      // THE CASE WITH SWAP(A,B) this will not swap the variables because this will simply copy the varible x and y to a and b 
                               //and later function will be detsroyed sothere will be no swapping in the memory.
    cout<<"enter the value of x "<<x<<" enter the value of y "<<y<<endl;
    return 0;
}                             //THE CASE WITH pointer - this will also destroy the function after using the varibale 
                               //but it will swap the function at memory locations before destroying them.
void swapPointer(int* a,int* b){
    int temp = *a;
     *a = *b;
     *b = temp;
}