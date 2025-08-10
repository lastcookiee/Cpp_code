#include<iostream>
using namespace std;

int main(){
    int cp;
    cout<<"enter the cost price: ";
    cin>>cp;
    int sp;
    cout<<"enter the selling price: ";
    cin>>sp;
    if(sp<cp){
        cout<<"Loss: "<<cp-sp<<endl;
    }
    else if(sp>cp){
        cout<<"Profit: "<<sp-cp<<endl;
    }
    else{
        cout<<"not profit nor loss"<<endl;
    }
}