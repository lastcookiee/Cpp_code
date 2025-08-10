#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the marks: ";
    cin>>m;

    if(m>=81 && m<=100){
        cout<<" Very good marks"<<endl;
    }
    else if(m>=61){
        cout<<"Good"<<endl;
    }
    else if(m>=41){
        cout<<"Average"<<endl;
    }
    else if(m<=40){
        cout<<"Fail"<<endl;
    }
    else{
        cout<<"Invalid marks"<<endl;
    }
}




// IF ELSE KA LADDER H YEH