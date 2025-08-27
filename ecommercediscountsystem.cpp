#include<iostream>
using namespace std;
int main(){
    int cartamount;
    cout<<"enter cart amount";
    cin>>cartamount;


    string membershiptype;
    cout<<"enter your membership type";
    cin>>membershiptype;
    
    string paymentmode;
    cout<<"enter payment mode";
    cin>>paymentmode;

    if(cartamount>=5000){
            if(membershiptype=="gold"){
if(paymentmode=="card"){
    cout<<"your discount is 20%";

}
else if(paymentmode=="upi"){
cout<<"your idscount is 15%";
}
        }
        else if(membershiptype=="silver"){
if(paymentmode=="card"){
    cout<<"your discount is 10%";
}
else if(paymentmode=="upi"){
    cout<<"your discount is 5%";
        }

    }}
else if(cartamount<5000){

    if(membershiptype=="gold"){
        cout<<"your discount is 10%";

    }
    else{
cout<<"no discount";
    }
}
}
