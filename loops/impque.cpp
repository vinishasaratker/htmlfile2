#include<iostream>
using namespace std;
int main()//{
// sum of number exa  4=1+2+3+4=10
//     int sum=0;
//     int num;
//     cout<<"enter num";
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         sum=sum+i;
//     }
//     cout<<sum;
// }

// {
// //factorial of any number
// int num;
// cout<<"enter any num";
// cin>>num;
// int fact=1;
// for(int i=1;i<=num;i++){
//     fact=fact*i;
    
// }cout<<fact;
// }

{
    //kisibhi digit ke first or last digit ka addition krna take a 4 digit number 
    int num;
    cout<<"enter number";
    cin>>num;
    int sum=0;
    if(num<=9999 && num>1000){
        int digit=num%10;
        int count=num/1000;
    
    sum=sum+digit+count;}
    cout<<sum;
}