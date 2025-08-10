#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter a number: ";
    cin>>x;
    if(x%3==0 || x%5==0){
        cout<<"The number is divisible by 5 or 3"<<endl;
    }
    else{
        cout<<"Not divisble by either 3 or 5"<<endl;
    }
}