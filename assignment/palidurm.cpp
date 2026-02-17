//wap check the number present in array reversed or not (palidurm or not)

#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while(num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return (original == reversed);
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << "\nPalindrome check:\n";
    for(int i=0; i<n; i++) {
        if(isPalindrome(arr[i]))
            cout << arr[i] << " is Palindrome\n";
        else
            cout << arr[i] << " is Not Palindrome\n";
    }
    return 0;
}
