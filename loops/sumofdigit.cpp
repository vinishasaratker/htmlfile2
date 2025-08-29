#include<iostream>
using namespace std;
 int main()//{
//      int num;
// cout<<" enter number";
// cin>>num;
// int sum=0;
// while(num>0){
//     int digit=num%10;
//     sum=sum+digit;
//     num=num/10;

// }
// cout<<sum;
// }
// {
// even number in a digit
//     int num;
//     cout<<"enter any number";
//     cin>>num;
//     while(num>0){
//         int digit=num%10;
       
//         if(digit%2==0){
//             cout<<digit;

//         }
//          num=num/10;
//     }
// }
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
{
    // greatest number in a digit
    int num;
    cout<<"enter any number";
    cin>>num;
     int var=0;
     int digit;
    while(num>0){
        int digit=num%10;
        
        if(digit>var){
            var=digit;
            // cout<<var;
        }
        num=num/10;
        //  cout<<digit;
    }
    cout<<digit;
    
   
}