#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    for (int i=n-1;i>=1;i--)
    {
        if (n%i==0)
        {
            cout << i << " ";
            break;
        }
    }
}