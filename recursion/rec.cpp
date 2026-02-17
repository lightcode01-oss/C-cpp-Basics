#include<iostream>
using namespace std;

void rec(int n){
    if(n>0){
        cout<<n<<endl;
        rec(n-1);
    }
}

int main(){
    int number;
    cout<<"Enter a positive number"<<endl;
    cin>>number;
    cout<<"recursive function output:"<<endl;
    rec(number);
    return 0;
}