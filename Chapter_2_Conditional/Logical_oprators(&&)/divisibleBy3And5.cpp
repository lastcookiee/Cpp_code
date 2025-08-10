#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter a number: ";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"The number "<<x<<" is divisible by 3 and 5"<<endl;
    }
    else{
        cout<<"Not divisible by 3 and 5";
    }
}
