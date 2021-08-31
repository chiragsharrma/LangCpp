#include<bits/stdc++.h>
using namespace std;


int fun(int );
int fib(int );
int main()
{
    int n,N;
    cout<<"enter the number: "<<"\n";
    cin >> n;
    cout<<"the factorial is: "<< fun(n)<< "\n";
    cout<<"enter fibonacci key: "<<endl;
    cin>> N; 
    cout<<"the fibonacci is at position: "<< fib(N)<<"\n";
    return 0;
}
int fun( int n){
    if(n<=1){
        return 1;
    }
    return n*fun(n-1);
}
int fib(int n){
         if(n < 2){
                return n;
         }
    return fib(n-2) + fib(n-1);
}