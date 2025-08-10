#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    float y = (float)x;                                    //TYPECASTING CHANGING THE TYPE OF VARIABLE
    cout << "Half of the number is: " << y / 2 << endl;
}