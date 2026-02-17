
//wap sum of the element present in the array 
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "\nSum of array elements = " << sum;
    return 0;
}
