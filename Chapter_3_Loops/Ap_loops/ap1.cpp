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

// without ap

int main(){
    int n;
    cout<<"enter no. of terms: ";
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a + 4;
    }
}


// AP nth term formula [ an = a + (n-1)d ]  a = first term , n = nth term(last term) , d = difference