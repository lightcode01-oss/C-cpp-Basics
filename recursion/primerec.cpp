// WAP to check a number prime or not using recusion function 
#include <iostream>
using namespace std;

// Recursive function to check if n is prime
bool isPrime(int n, int i = 2) {

    if (n <= 2)
        return (n == 2); // 2 is prime, 1 or 0 are not
    if (n % i == 0)
        return false; // Divisible => not prime
    if (i * i > n)
        return true;  // No divisor found => prime
    
    // Recursive call
    return isPrime(n, i + 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
