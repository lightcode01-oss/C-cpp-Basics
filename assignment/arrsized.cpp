//wap take user input and store inside that array based on its size
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << "\nStored elements are:\n";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}
