#include<iostream>
using namespace std;
int main()//{
//     int num;
//     int count=0;
//     cout<<"enter any number";
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         if(num%i==0)
// {count++;}
//     }
//     if(count==2){
//         cout<<"prime";

//     }
//     else{
//         cout<<"not prime";
//     }
// }
// {
//     int num;
//     cout<<"enter num";
//     cin>>num;
//     bool isprime=false;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             cout<<"not a prime", isprime=true;
//             break;
//         }
//     }
//     if(isprime==false){
//         cout<<"prime";
//     }
//     else{
//         cout<<"not prime";
//     }
// }

// {
//     int num;
//     cout<<"enter number :";
//     cin>>num;
//     int count=0;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             count++;
//         }
//     }
// if(count==2){
//     cout<<" prime number ";

// }
// else{
//     cout<<" not prime ";
// }
// }
{
    int num;
    cout<<" enter num ";
    cin>>num;
     int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    cout<<count;

}
