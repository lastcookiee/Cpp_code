#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int count = 0 , product = 1;
    while(n!=0){
        product *= n%10;
        n=n/10;
        count++;
    }
    cout<<product<<endl;
}