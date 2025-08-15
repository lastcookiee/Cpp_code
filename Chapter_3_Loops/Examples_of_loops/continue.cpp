#include <iostream>
using namespace std;

int main(){
    for(int i = 1 ; i<=20 ; i++){
        if( i == 3 || i == 8)                //if you want to skip the round
        continue;
        cout<<i<<" ";
    }
}