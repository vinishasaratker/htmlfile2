// #include<iostream>
// using namespace std;
// int main(){
//     int cartamount;
//     cout<<"enter cart amount";
//     cin>>cartamount;


//     string membershiptype;
//     cout<<"enter your membership type";
//     cin>>membershiptype;
    
//     string paymentmode;
//     cout<<"enter payment mode";
//     cin>>paymentmode;

//     if(cartamount>=5000){
//             if(membershiptype=="gold"){
// if(paymentmode=="card"){
//     cout<<"your discount is 20%";

// }
// else if(paymentmode=="upi"){
// cout<<"your idscount is 15%";
// }
//         }
//         else if(membershiptype=="silver"){
// if(paymentmode=="card"){
//     cout<<"your discount is 10%";
// }
// else if(paymentmode=="upi"){
//     cout<<"your discount is 5%";
//         }

//     }}
// else if(cartamount<5000){

//     if(membershiptype=="gold"){
//         cout<<"your discount is 10%";

//     }
//     else{
// cout<<"no discount";
//     }
// }
// }
//
// #include<iostream>
// using namespace std;
// int main(){
//     string stream;
// cout<<"enter your stream";
// cin>>stream;
// int marks;

// cout<<"enter your marks";
// cin>>marks;

// int entrancescore;
// cout<<"enter your entrance exam score";
// cin>>entrancescore;
// if(stream=="science"){
// if(marks>=70){
//     if(entrancescore>=60){
//         cout<<"eligible for bsc.";

//     }
//     else{
//         cout<<"eligible for diploma";
//     }


// }
// else{
//     cout<<"not eligible for science";
// }

// }

// else if(stream=="commerce"){
//     if(marks>=65){
//         if(entrancescore>=55){
//             cout<<"eligible for bcom";
//         }
//         else{
//             cout<<" eligible for diploma in accounts";
//         }
//     }
//     else{
//         cout<<"not eligible for commerce";
//     }

// }

// else if(stream=="arts"){
//     if(marks>=60){
//         if(entrancescore>=50){
//             cout<<"eligible for ba";
//         }
//         else{
//             cout<<"shortlisted for interview";
//         }
//     }
//     else{
//         cout<<"not eligible for arts";
//     }

// }

// else{
//     cout<<"not  eligible";
// }
// }
// #include<iostream>
// using namespace std;
//  int main()//{
//     int income;
//     cout<<"enter your income";
//     cin>>income;
//     if(income<=250000){

//         cout<<"no tax";

//     }
//     else if(income>250001 && income<500000){ 
//         int tax;
//         int rate=5;

//         tax=income*rate/100;
//         cout<<tax<<" tax rate is 5%";
        
//     }
//     else if(income>500001 && income<1000000){
//         int tax;
//         int rate=20;
//         tax=income*rate/100;
//         cout<<tax<<" tax rate  is 20%";
//     }
//     else if(income>1000000){
//         int tax;
//         int rate=30;
//         tax=income*rate/100;

//         cout<<tax<<" tax rate  is 30%";
//     }
// }


// // {
// //     int bill;
// //     cout<<"enter your shopping bill";
// //     cin>>bill;
// //     int discount;
// //     if(bill>=1000){
// //         discount=bill*20/100;
// //         cout<<discount<<" discount is 20%";
// //     }
// //     else if(bill>=500){
// //         discount=bill*10/100;
// //         cout<<discount<<" discount is 10 %";
// //     }
// //     else{
// //         cout<<"no discount";
// //     }
// // }
// {
//     int time;
//     cout<<"enter time :";
//     cin>>time;
//     if(time<=12){
//         cout<<"good morning";
//     }
//     else if(time>12 && time<=17){
//         cout<<" good afternoon";
//     }
//     else if(time>=18 && time<20){
//         cout<<"good evening";
//     }
//     else{
//         cout<<"invalid";
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"enter card amount :";
    cin>>amount;
    string paymentmode;
    cout<<" enter your payment mode :";
    cin>>paymentmode;
    string membership;
    cout<<" enter yoyr membership";
    cin>>membership;
    if(amount>=5000){
        if(membership=="gold"){
            if(paymentmode=="card"){
cout<<" your discount is 20%";
            }
            else if(paymentmode=="upi"){
cout<<" your discount is 15%";
        }
        else if(membership=="silver"){
if(paymentmode=="cash"){
    cout<<" your discount is 5%";

}
else if(paymentmode=="card"){
    cout<<" your discount is 5%";
        }

    }}
    else if(amount<5000){

    }
} 
