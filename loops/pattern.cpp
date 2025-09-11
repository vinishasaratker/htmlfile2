#include<iostream>
using namespace std;
int main()//{//right angle triangle
//    for(int row=1;row<=5;row++){
//     for(int col=1;col<=5;col++){
//         if(col<=row){
//             cout<<"*";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//    cout<<endl;
   // } 
// left side triangle
// for(int row=0;row<5;row++){
//     for(int col=0;col<5;col++){
//                 if(col<=row){
//             cout<<"-";
//         }
//        else{
//             cout<<"*";
//         }
//    }
//    cout<<endl;
//    } 
// for(int row=1;row<=5;row++){
//     for(int col=1;col<=5;col++){
//                 if(col<=6-row){
//             cout<<" *";
//         }
//        else{
//             cout<<"   ";
//         }
//    }
//    cout<<endl;
//    } 
//}
// {
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


{
    for(int row=1;row<=5;row++){
        for(int col=1;col<=5;col++){
            if(col<=row){
                cout<<col;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}