#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the age of Ram: ";
    cin >> a;
    cout << "Enter the age of Shyam: ";
    cin >> b;
    cout << "Enter the age of Ajay: ";
    cin >> c;

    if (a < b) {
        if (a < c) {
            cout << "Ram is the youngest";
        } else {
            cout << "Ajay is the youngest";
        }
    } 
    else {
        if (b < c) {
            cout << "Shyam is the youngest";
        } else {
            cout << "Ajay is the youngest";
        }
    }
}
