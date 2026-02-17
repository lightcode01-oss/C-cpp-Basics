#include<iostream>
using namespace std;

int main() {
    int age ;
    cout << "Enter your age: ";
    cin >> age;
    try {
        if(age >= 18 && age < 50) {
            cout << "You are eligible to vote." << endl;
        } 
        else if(age >= 50) {
            cout<<("too old"); // Throwing a string exception
        }else throw (age); // Throwing an integer exception
}
    catch(int a) {
        if(a < 18) {
            cout << "Exception caught: Age " << a << " is too young to vote." << endl;
        }
        
    }

    return 0;
}