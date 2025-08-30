#include<iostream>
using namespace std;
 int main()//{
//     int number;
//     cout<<"enter any number";
//     cin>>number;
//     int value=0;
//     int digit;
//     while(number>0){
//          int digit =number%10;
//         if(digit>value){
//             value=digit;
//         }
        
//         number=number/10;
 
//     }
//     cout<<"greatest digit is :"<<value;
// }


// {
//     int num;
//     cout<<"enterany number";
//     cin>>num;
//     int value=9;
//     while(num>0){
//         int digit=num%10;
//         if(digit<value){
// value=digit;
//         }
//         num=num/10;
//     }
//     cout<<"smallest digit is :"<<value;
// }
// {
//  //reverse of any number
//  int num ,digit;
//  int rev=0;
//  cout<<"enter any number";
//  cin>>num;
//  while(num>0){
//     int digit=num%10;
// rev=rev*10+digit;
//     num=num/10;
//  }
// cout<<rev;

// }

{
    int num , digit,temp;
    cout<<"enter num";
    cin>>num;
    temp=num; //ttemp=1234
    int rev=0;
    while(num>0)
    {
int digit=num%10;//1234 123
rev=rev*10+digit;//4 3

num=num/10;//123 12 
    }
    if(temp==rev){
    cout<<"palidrom";
}
else{
    cout<<"not a palidrom";
}
}