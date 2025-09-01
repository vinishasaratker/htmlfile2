#include<iostream>
using namespace std;
int main()//{
//     int num;
//     cout<<"enter number";
//     cin>>num;
//     int fi=0;
//     int se =1;
//     int next;
//     cout<<fi << "  "<<se;
//     for(int i=1;i<=num-2;i++){
// next=fi+se;
// fi=se;
// se=next;

    
//     cout<<next;}
// }
{int first=0;
    int second=1;
    int num;
    int next;
    cout<<"enter any num";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i==1){
            cout<<first<<"  ";continue;
        }
        if(i==2){
            cout<<second<<"  ";continue;
        }
         next=first+second;
        first=second;
         second=next;
    
     cout<<next<<"  ";
}
}