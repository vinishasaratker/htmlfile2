#include<iostream>
using namespace std;

int main(){
int a=7;
int b=8;


    char ch;
    cout<<"Enter a charactor: ";
    cin>>ch;
    switch(ch){
        case '+': cout<<a+b<<" addition of two numberss";
        break;
        case'-': cout<<a-b<<" subtraction of two numbers";
       
        break;
        case'*':cout<<a*b<<" multiplication";
        break;
        case'/':cout<<a/b<<" division of two numbers";
        break;
        case'%':cout<<a%b<<"modulus of two numbers";
      

        }

    
  
    
   
    }