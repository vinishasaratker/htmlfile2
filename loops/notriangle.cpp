#include<iostream>
using namespace std;
int main()//right angle triangle
//     for(int row=1;row<=5;row++){
//     for(int col=1;col<=5;col++){
//         if(col<=row){
//             cout<<col;
//         }
//         else{
//              cout<<"  ";
//         }
//     }
//    cout<<endl;
//     }
    


//      for(int row=1;row<=5;row++){
//     for(int col=1;col<=5;col++){
//         if(col<=row){
//             cout<<row;
//         }
//         else{
//              cout<<"  ";
//         }
//     }
//    cout<<endl;
//     }

// int num=1;
// num=1;
// for(int row=1;row<=5;row++){
//     for(int col=1;col<=5;col++){
//         if(col<=row){
//             cout<<num;
//      num++;       
            
//         }
        
//         else{
//              cout<<"  ";
//         }
//     }
//    cout<<endl;
// }}
// charactor triangle
// #include<iostream>
// using namespace std;
// int main(){
// for(int row=1;row<=5;row++){
//     for(int col=1;col<=5;col++){
//         if(row<=row){
//             cout<<char()
//         }
//     }
// }
// }
// {
//     for(int row=1;row<=5;row++){
//         for(int col=1;col<=5;col++){
//             if(col<=row){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }
// {
//     for(int row=1;row<=5;row++){
//         for(int col=1;col<=5;col++){
//             if(col>=6-row){
//                 cout<<"*";
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
        for(int col=1;col<=row;col++){
            if(col<=row){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}