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

// #include<iostream>
// using  namespace std;
// int main(){
//     //printing a multiplication table of any number
//     int num;
//     cout<<"enter any number";
//     cin>>num;
//     int table;
//     for(int i=1;i<=10;i++){
// table=num*i;
//  cout<<table<<" ";
//  }
   
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //cheching a number is prime or not
//     int num;
//     cout<<"enter  any number";
//     cin>>num;
//     int count=0;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){count++;}

//     }
//     if(count==2){
//         cout<<" number is prime number";

//     }
//     else{
//         cout<<" not prime number";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     // reverse of a number program
//     int num;
//     cout<<"enter any number :";
//     cin>>num;
//     while(num>0){
//         int digit =num%10;
//         cout<<digit;
//         num=num/10;

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     // printing febonacci series
//     int num;
//     cout<<"enter any number :";
//     cin>>num;
//     int fi=0;
//     int se=1;
//     int sum=0;
//     cout<<fi<<" "<<se;
//    for(int i=1;i<=num-2;i++){
//     sum=fi+se;
//       fi=se;
//     se=sum;
   
//  cout<<sum<<" ";
//    }
 
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //implement a program to count number of digits in a number
//     int num;
//     cout<<"enter any number";
//     cin>>num;
// int count=0;
// while(num>0){
//     num=num/10;
//     count++;
// }
// cout<<" number of digit is"<<count;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     // write a program to calculate sum of digits in a number
//     int num;
//     cout<<"enter a number :";
//     cin>>num;
//     int sum=0;
//     while(num>0){
//         int digit=num%10;
// sum=sum+digit;
// num=num/10;
//     }
//     cout<<"sum of digit is "<<sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //palidrom or not 
//     int num,digit,rev;
  
// {
//     int num , digit,temp;
//     cout<<"enter num";
//     cin>>num;
//     temp=num; //ttemp=1234
//     int rev=0;
//     while(num>0)
//     {
// int digit=num%10;//1234 123
// rev=rev*10+digit;//4 3

// num=num/10;//123 12 
//     }
//     if(temp==rev){
//     cout<<"palidrom";
// }
// else{
//     cout<<"not a palidrom";
// }
//}
//}

// #include<iostream>
//  using namespace std;
// int main(){
//     // sum  of even and odd number seperately
//     int num;
//     int sum=0;
//     int add=0;
//     cout<<"enter a number:";
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         if(i%2==0){
            
//             sum=sum+i;
//         }
//         else if(i%2!=0){
            
//             add=add+i;
//         }

//     }
//     cout<<" sum of even sumber is  "<<sum;
//     cout<<" sum of odd number is "<< add;
// }
// #include<iostream>
// using namespace std;
// int main(){
// half pyramid
   
//     for(int row=1;row<=5;row++){
//         for(int col=1;col<=5;col++){
//             if(col<=row){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//    // inverted half pyramid
//     for(int row=1;row<=6;row++){
//         for(int col=1;col<=5;col++){
//             if(row<=col){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//}

//  #include<iostream>
//  using namespace std;
//  int main(){
// // half pyramidof numbers
   
//      for(int row=1;row<=5;row++){
//               for(int col=1;col<=5;col++){
//           if(col<=row){
//                  cout<<col;
//             }
//              else{
//               cout<<" ";
//             }
//         }
//       cout<<endl;     }}
// #include<iostream>
// using namespace std;

// int main() {
   

//     char ch = 'A';

//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << ch << " ";
//         }
//         cout << endl;
//         ch++;  // Move to next alphabet for next row
//     }

//     return 0;


// }

// #include<iostream>
// using namespace std;
// int main(){
// {
//      // star pyramid
//     for(int row=1;row<6; row++){
//         for (int col=1;col<=6;col++){
//             if(col>=7-row ){
//                 cout<<"* ";
                
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
        
//     }

//      for(int row=0;row<6; row++){
//         for (int col=0;col<6;col++){
//             if(col>=row ){
//                 cout<<"* ";
                
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
        
//     }
// }
// }



// #include<iostream>
// using namespace std;
// int main() {
//      // cheching the range of prime numbers
//     int start, end;
//     cout << "Enter starting range: ";
//     cin >> start;
//     cout << "Enter ending range: ";
//     cin >> end;

//     cout << "Prime numbers between " << start << " and " << end << " are: ";
// for (int num = start; num <= end; num++) {
//         int count = 0;
//         for (int i = 1; i <= num; i++) {
//             if (num % i == 0) {
//                 count++;
//             }
//         }
//   if (count == 2) {
//             cout << num << " ";
//         }
//     }
// cout << endl;
// }



// #include<iostream>
// using namespace std;
// int main(){
//      //lcm of two numbers
//      int num1;
//      cout<<"enter number first :";
//      cin>>num1;
//      int num2;
//      cout<<"enter number second :";
//      cin>>num2;

//      int greatest=(num1>num2)? num1:num2;
//      int a=greatest;
//      while(1){
//           if(greatest%num1==0 && greatest%num2==0){
//                cout<<greatest;
//                break;
//           }
//           greatest=greatest+a;
         
//      }
// }

// #include<iostream>
// using namespace std;
// int main(){
//      // hcf of two numbers
//      int num1;
//      cout<<"enter number 1";
//      cin>>num1;
//      int num2;
//      cout<<"enter number 2";
//      cin>>num2;
//      int hcf;
//      int small=(num1<num2)? num1:num2;
//      for(int i=1;i<=small;i++){
//           if(num1%i==0 && num2%i==0){
// hcf=i;
//           }
//      }
//      cout<<hcf;

// }
#include<iostream>
using namespace std;
int main(){
     // enter power  of any number
     int base;
     cout<<"enter base value:";
     cin>>base;
     int power;
     cout<<"enter power :";
     cin>>power;
     int result=1;
     for(int i=1;i<=power;i++){
          result=result*base;
     }
     cout<<result;
}