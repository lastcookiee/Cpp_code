#include<iostream>
using namespace std;

// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if(x>=0)
//         cout<<x<<endl;
//     else
//         cout<<-x<<endl;
    
// }

// IF YOU WANT TO CHANGE x INTO I'TS ABSOLUTE VALUE

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x<=0) x = -x;
    cout<<x<<endl;
}




// MOD