#include<iostream>
using namespace std;
int main(){
    string stream;
cout<<"enter your stream";
cin>>stream;
int marks;

cout<<"enter your marks";
cin>>marks;

int entrancescore;
cout<<"enter your entrance exam score";
cin>>entrancescore;
if(stream=="science"){
if(marks>=70){
    if(entrancescore>=60){
        cout<<"eligible for bsc.";

    }
    else{
        cout<<"eligible for diploma";
    }


}
else{
    cout<<"not eligible for science";
}

}

else if(stream=="commerce"){
    if(marks>=65){
        if(entrancescore>=55){
            cout<<"eligible for bcom";
        }
        else{
            cout<<" eligible for diploma in accounts";
        }
    }
    else{
        cout<<"not eligible for commerce";
    }

}

else if(stream=="arts"){
    if(marks>=60){
        if(entrancescore>=50){
            cout<<"eligible for ba";
        }
        else{
            cout<<"shortlisted for interview";
        }
    }
    else{
        cout<<"not eligible for arts";
    }

}

else{
    cout<<"not  eligible";
}
}
