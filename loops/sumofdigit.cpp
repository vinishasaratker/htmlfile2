#include<iostream>
using namespace std;
 int main()
// {
// // even number in a digit
//    int num;  
//      cout<<"enter any number";
//     cin>>num;
//  while(num>0){
//          int digit=num%10;
       
//         if(digit%2==0){
//            cout<<digit;
//        }
//          num=num/10;
//     }
//  }
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
// {
//    // sum of all the digits in a number
//    int num;
//    cout<<"enter num";
//    cin>>num;
//    int sum=0;
//    while(num>0){
// int digit=num%10;
// sum=sum+digit;
// num=num/10;
//    }
//    cout<<sum;
// }
{
   int num ,digit ;
   cout<<" enter a number :";
   cin>>num;
   while(num>0){
      int digit=num%10;
      if(digit%2==0){
         cout<<digit;
      }
     
      num=num/10;
   }
}