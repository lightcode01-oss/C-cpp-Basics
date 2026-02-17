//wap check the number present in the array is prime or not 
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i=2; i*i <= num; i++)
        if(num % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << "\nPrime number check:\n";
    for(int i=0; i<n; i++) {
        if(isPrime(arr[i]))
            cout << arr[i] << " is Prime\n";
        else
            cout << arr[i] << " is Not Prime\n";
    }
    return 0;
}
