#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int prdt = 1;
    for( int i = 1 ; i <=n ; i++){
        prdt = prdt*i;
    }
    cout<<prdt;
}