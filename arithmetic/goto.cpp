#include<iostream>
using namespace std;

int main(){

//goto

    int num=1,table;
    
    cout<<"Enter a Number: ";
    cin>>table;

    printnumber:   //label
    if(num<=10){
 
    cout<<table*num<<" ";
    num++;
    goto printnumber;

    }
}
