#include<iostream>
using namespace std;
int main(){
 int week;
    cout<<"Enter a Number: ";
    cin>>week;

    switch (week){
    case 1: cout<<"Monday";
        break;
 case 2: cout<<"Tuesday";
        break;
case 3: cout<<"Wednesday";
        break;
case 4: cout<<"Thu";
        break;
         case 5: cout<<"Fri";
        break;
case 6: cout<<"Sat";
        break;
case 7: cout<<"Sun";
        break;
 default: cout<<"Invalid";
    }
}



// advantages

// jumping statement hota hai
// menu base programming
// disadvantages
//switch only supports int and char 
//switch onlly supports arithmetic operator 
// switch dosent support simlar caSES