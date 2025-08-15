#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int r = 0 , sum = 0;
    int original = n;
    while(n != 0){
        int ld = n%10;
        r = r*10+ld;
        n = n/10;
    }
    sum = r+original;
    cout<<sum<<endl;
}