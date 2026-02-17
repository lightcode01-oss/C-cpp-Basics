#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        cout << "Not a prime number" << endl;
        return false;
    }

    for (int i = 2; i <= num; i++){
        if (num % i == 0){
            cout<<"Not a prime number"<<endl;
            return false;
        }else{
            cout<<"Prime number"<<endl;
            return true;
            }
        }
}
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    isPrime(num);
    
}