#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 0 , int ld = 0;
    while(n != 0){
        ld = n%10;
        if(ld/2==0){
            count+=ld;
        }
        n = n/10;    
    }
    cout<<"Sum of even number is: "<<count;

}