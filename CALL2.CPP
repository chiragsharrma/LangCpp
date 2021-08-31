#include<iostream>
using namespace std;
//call by reference another appproach

int main(){
     int x =2000, y=6000;
     cout <<"enter the the value of x "<<x<<" enter the value of y "<<y<<endl;
     swap(x,y);
     cout <<"enter the the value of x "<<x<<" enter the value of y "<<y<<endl;
     return 0;
}

void swap(int &a ,int &b){
    int temp = a;
    a = b;
    b = temp;
}