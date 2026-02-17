//WAP TO SWAP USING 2 VARIABLE

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter 1st numbers: ";
    cin >> a;
    cout << "Enter 2nd numbers: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using arithmetic operations
    a = a + b;  
    b = a - b;  
    a = a - b;  


    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}