#include<iostream>
using namespace std;
int main(){
   
    int click;
    cout<<"enter number";
    cin>>click;
     int balance;
    cout<<"enter balance";
    cin>>balance;
    if(click==1){
        cout<<"withdraw";

    }
    else if(click==2){
        cout<<"deposite";
    }
    else if(click==3){
        cout<<"bank balance";
    }
    else{
        cout<<"invalid";
    }
}