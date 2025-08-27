#include<iostream>
using namespace std;
int main(){
int sallary;
cout<<"enter your sallary";
cin>>sallary;
if(sallary>0 &&sallary<=20000){
    if(sallary==15000){
        cout<<"nokia"<<" you can by nokia phone";
    }
    else if(sallary==20000){
        cout<<"mota 10 "<<"you can by mota 10 phone";
    }

}

else if( sallary>20000 && sallary<=50000){
if(sallary==30000){
    cout<<"real me13"<<"  you can buy realme 13 phone ";
}
else if(sallary==40000){cout<<"real me 14 "<<" you can by real me 14";

}
}
else if(sallary>50000 ){
    if(sallary==70000){
        cout<<"i phone 13  "<<"  you can by a i phone";
    }
    else if(sallary==100000){
        cout<<"i phone 15 "<<" you can by i phone15";
    }

}

}