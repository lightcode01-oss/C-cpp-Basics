//wap if the number in array is even then replace with 0 or else replace with 1

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

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0)
            arr[i] = 0;
        else
            arr[i] = 1;
    }

    cout << "\nArray after replacing even→0 and odd→1:\n";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}
