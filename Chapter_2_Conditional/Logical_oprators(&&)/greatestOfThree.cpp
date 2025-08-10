#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    cout<<"enter the third number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest"<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is greatest"<<endl;
    }
    else{
        cout<<c<<" is greatest"<<endl;
    }
}