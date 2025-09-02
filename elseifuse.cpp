#include<iostream>
using namespace std;
 int main()
// {int num1,num2,num3;
//     cout<<"enter numbers";
//     cin>>num1>>num2>>num3;
//     if(num1>num2 && num1>num3){
//         cout<<"num1 is greater"<<num1;
//     }
//     else if(num1<num2&&num3<2){
//         cout<<"num2 is greater"<<num2;
//     }
//     else{
//         cout<<"num3 isgreater "<<num3;
//     }
    
// } 
// {
//     int marks;
//     cout<<"enter marks";
//     cin>>marks;
// if(marks>0&& marks<=30){
//     cout<<"d";
// }
// else if(marks>30 && marks<=50){
//     cout<<"c";

// }
// else if(marks>50 && marks<=70){
//     cout<<"b";

// }
// else if(marks>70 && marks<= 100){
//     cout<<"a";

// }
// else {
//     cout<<"invalid";
// }
// }
// {
//     int number;
//     cout<<" enter a number";
//     cin>>number;
//     if(number>0){
//         cout<<" number is positive";
//     }
//     else if(number==0){
//         cout<<" number is zero";
//     }
//     else{
//         cout<<"number is negative";
//     }
// 
{
int amount;
cout<<amount<<" enter amount";
cin>>amount;
if(amount<1000){
    
    cout<<" no discount";

}
else if( amount>1000 && amount<=5000){
    int price;
    price=amount-((5*amount)/100);
    cout<<price<<" discount  is 5% ";
}
else if( amount>5000 && amount<=10000){
    int price;
    price=amount-((8*amount)/100);
    cout<<price  <<" discount  is 8% ";
}


else if( amount>10000 && amount<=40000){
    int price;
    price=amount-((10*amount)/100);
    cout<<price  <<"  discount  is 10% ";
}
else if(amount>40000){
    int price;
    price=amount-((15*amount)/100);
    cout<<price  <<"  discount  is 15% ";
}

return 0;

}