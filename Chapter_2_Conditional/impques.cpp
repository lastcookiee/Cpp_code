#include<iostream>
using namespace std;

int main(){
    int x = 3 , y,z;
    y=x=10;           //ASSIGNMENT OPERATORS MEI RIGHT->LEFT jata h and in arithmetic left -> right if same precedence
    z=x<10;           // < , > relational operators ki zyada aukat h = se isliye x<10 is false statement answer is '0'
    cout<<x<<" "<<y<<" "<<z;
}