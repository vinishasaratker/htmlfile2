#include<iostream>
using namespace std;
int main(){
    // que check number is positive negative or zero
    int num;
    cout<<"enter any number :";
    cin>>num;
    if(num>0){
        cout<<"number is positive";
    }
    
    if(num==0){
        cout<<"number is zero";
    }
    if(num<0){
        cout<<"number is negative";
    }
}