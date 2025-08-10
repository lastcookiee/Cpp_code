#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"The three digit number is: "<<x<<endl;
    }
    else{
        cout<<"The number is not three digit: "<<endl;
    }
 
}