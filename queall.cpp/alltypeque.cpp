// #include<iostream>
// using namespace std;
// int main(){
//     // que check number is positive negative or zero
//     int num;
//     cout<<"enter any number :";
//     cin>>num;
//     if(num>0){
//         cout<<"number is positive";
//     }
    
//    else if(num==0){
//         cout<<"number is zero";
//     }
//      else if(num<0){
//         cout<<"number is negative";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     //implement a gradient system
//     int marks;
//     cout<<"enter marks:";
//     cin>>marks;
//     if(marks<=90 && marks>=80){
// cout<<"grade is A";
//     }
//      else if(marks<80 && marks>=60){
//         cout<<"grade is B";
//     }
//     else if(marks<60 && marks>=40){
//         cout<<"grade is c";
//     }
//      else if(marks<40 && marks>0){
//         cout<<" grade is d";
//     }
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     // check number is even and odd
//     int num;
//     cout<<"enter a number :";
//     cin>>num;
//     if(num%2==0){
//         cout<<"number is even";
//     }
//     else{
//         cout<<"no is odd";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//check largestof three numbers
//     int num1;
//     cout<<"enter number first";
//     cin>>num1;
//     int num2;
//     cout<<"enter number second";
//     cin>>num2;
//     int num3;
//     cout<<"enter number third";
//     cin>>num3;
//     if(num1>num2 && num1>num3){
//         cout<<"num1 ia greater "<<num1;
//     }
//      else if(num2>num1 && num2>num3){
//         cout<<"num2 is greater "<<num2;
//     }
//      else if(num3>num1 && num3>num2){
//         cout<<"num3 is greater "<<num3;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
// // check year is leap year or not
// int year;
// cout<<"enter any year";
// cin>>year;
// if(year%400==0 or year%4==0){
//     cout<<"year is leap year";
// }
// else if(year%100!=0){
//     cout<<"year is not leap year";
// }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     // eligibility  for voting or not
//     int age;
//     cout<<"enter age";
//     cin>>age;
//     if(age>=18){
//         cout<<"eligible for vote";
//     }
//     else{
//         cout<<"not eligible";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     // check  charactor is vovel or consonant
// char ch;
// cout<<"enter a charactor";
// cin>>ch;
// if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u'){
//     cout<<" charactor is vovel";
// }
// else{
//     cout<<" charactor is consonant";
// }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     // atm pin question
//     int value;
//     cout<<"value";
//     cin>>value;
//     if(value==1){
//         cout<<"cash";
//     }
//     else if(value==2){
//         cout<<"withdraw";
//     }
//     else if(value==3){
//         cout<<"clear all";
//     }
//     else{
//         cout<<"invalid";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     // discount for shopping according to your amount 
//     int amount, price;
//     cout<<"enter amount";
//     cin>>amount;
//     if(amount>0 && amount<1000){
//         price=amount-((5*amount)/100);
//         cout<<price<<"  your discount is 5%";
//     }
//     else if(amount>=1000 && amount<5000){
//         price=amount-((10*amount)/100);
//         cout<<price<<"  your discount is 10 %";
//     }
//     else if(amount>=5000 && amount<10000){
//         price=amount-((15*amount)/100);
//         cout<<price<<"  your discout is 15 %";
//     }
//     else if(amount>=10000 && amount<30000){
//         price=amount-((20*amount)/100);
//         cout<<price<<"  your discoumt is 20 %";
//     }
//     else if(amount>50000){
//         price=amount-((30*amount)/100);
//         cout<<price<< "  your discount is 30%";
//     }
// }
//loops question

// #include<iostream>
// using namespace std;
// int main(){
//     // printing or 10 natural number

//     int num=10;
//     for(int i=1;i<=10; i++){
// cout<<i;
// cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     // factorial of any number
//     int num;
//     cout<<"enter any number";
//     cin>>num;
//     int fact=1;
//     for(int i=1;i<=num;i++){
// fact=fact*i;
//     }
//     cout<<fact;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     // sum of n natural numbers
//     int sum=0;
//     int i=1;
// int num;
// cout<<"enter any number";
// cin>>num;
// while(i<=num){
//     sum=sum+i;
//     i++;
// }
// cout<<sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //program in which  printt the numbers  which aRE is divisible by 3 and 5
//     int num;
//     cout<<"enter any number :";
//      cin>>num;

//     for(int i=1;i<=num; i++){
//         if(i%5==0  && i%3==0){
//  cout<<i<<"  ";
//         }
        
//     }
    
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     // write a program to print square of sum og n natural numbers
//     int num;
//     cout<<"enter any number :";
//     cin>>num;
//     int sum=0;
//     int i=1;
//     while(i<=num){
//         int count=i*i;
//         i++;
// sum=sum+count;
//     }
//     cout<<sum;
// }

#include<iostream>
using  namespace std;
int main(){
    //printing a multiplication table of any number
    int num;
    cout<<"enter any number";
    cin>>num;
    int table;
    for(int i=1;i<=num;i++){
table=i*2;
 }
    cout<<table;
}