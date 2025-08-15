#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = true;
    for(int i=2 ; i<=n/2 ;i++){
        if(n%i==0)
        flag = false;
    }
    if(n==1) cout<<"Neither prime nor composite";
    else if(flag == false) cout<<"compsite number";
    else cout<<"prime number";
}