//WAP to check the element present in the array is even or odd

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << "\nEven or Odd check:\n";
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0)
            cout << arr[i] << " is Even\n";
        else
            cout << arr[i] << " is Odd\n";
    }
    return 0;
}
