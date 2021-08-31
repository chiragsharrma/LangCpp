#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"enter the size of matrix: ";
    cin >>n >> k;
    int a[n][k],transpose[n][k], row ,column, i,j;
    cout<<"enter the number of rows: ";
    cin >> row;
    cout<<"enter the number of columns: ";
    cin>> column;

    for(int i =0; i<row; ++i){
        for(int j = 0; j< column; ++j){
            cout<<"the element a"<< i + 1 << j + 1 <<":";
            cin >> a[i][j];
        }
    }
    cout<<"entered matrix is: "<<"\n"<<"\n";
    for(int i = 0; i < row; ++i){
        for(int j = 0; j< column; ++j){
            cout<<" "<< a[i][j];
            if(j == column - 1){
                cout<<"\n";
            }
        }
    }
    for(int i =0; i<row; ++i){
        for(int j = 0; j<column; ++j){
            transpose[i][j] = a[j][i];
        }
    }
    cout<<"transpose of matrix is:  "<<"\n"<<"\n";
    for(int i = 0; i < column; ++i){
        for(int j = 0; j< row; ++j){
            cout<<" "<< transpose[i][j];
            if(j == row - 1){
            cout<<"\n";
            }
        }
    }
    return 0;
}