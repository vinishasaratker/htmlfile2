#include<iostream>
using namespace std;
 int main()
{
// even number in a digit
   int num;  
     cout<<"enter any number";
    cin>>num;
 while(num>0){
         int digit=num%10;
       
        if(digit%2==0){
           cout<<digit;
       }
         num=num/10;
    }
 }
// {
//     // only odd number in a digit
//    int num;
//     cout<<"enter any number";
//     cin>>num;
//     while(num>0){
//         int digit=num%10;
       
//         if(digit%2!=0){
//             cout<<digit;

//         }
//          num=num/10;
//     }
// }
