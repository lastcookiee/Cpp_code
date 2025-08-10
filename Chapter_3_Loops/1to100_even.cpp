#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}


//similar loop but it will run 50 times

int main(){
    for(int i=2;i<=100;i=i+2){             //More beneficial for the computer as it is runnung 50 loops only
    cout<<i<<endl;}
}
