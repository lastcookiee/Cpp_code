// give ap - 4,7,10,13,16.....

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of terms: ";
    cin>>n;
    for(int i=4;i<=3*n-1;i+=3){
        cout<<i<<" ";
    }

}


// AP nth term formula [ an = a + (n-1)d ]  a = first term , n = nth term(last term) , d = difference