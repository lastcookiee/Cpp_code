#include<iostream>
using namespace std;

int main(){
    int l;
    cout<<"enter the length: ";
    cin>>l;
    int b;
    cout<<"enter the breadth: ";
    cin>>b;
    int area = l*b;
    int parameter = 2*(l+b);
    if(area>parameter){
        cout<<"Area is greater: "<<area<<endl;
    }
    else{
        cout<<"parameter is greater: "<<parameter<<endl;
    }
}