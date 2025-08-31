#include<iostream>
using namespace std;
int main()//

//     //number is amstrong or not
// int num;
// cout<<"enter any number";
// cin>>num;
// int digit ,temp,sum=0;
// num=temp;
// while(num>0){
//     digit=num%10;
//     sum+=digit*digit*digit;
// num=num/10;
// }
// if(temp==sum){
//     cout<<"amstrong";
// }
// else{
//     cout<<"not amstrong";
// }
// }
{
   int num,count;
    int i=1;
   cout<<"enter any number";
   cin>>num;
   for(int i=1;i<=num;i++){}
    if(num%i==0 && num%num==0){
        cout<<"prime";
    }
    else{
        cout<<"notprime";
    }
    
}