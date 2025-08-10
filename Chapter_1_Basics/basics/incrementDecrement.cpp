// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 4;
//     cout << x << endl;
//     x++;                 // Incrementing x by 1(post inrement)
//     cout<<x<<endl;

//     x--;                 // Decrementing x by 1
//     cout<<x<<endl;

//     ++x;
//     cout<<x<<endl;     // Incrementing x by 1(pre increment)
// }

// Difference between pre-increment and post-increment

#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    cout << x << endl;
    cout << ++x << endl; // Pre-increment: increments x before using it
    cout << x++ << endl;
    cout << x << endl;
}