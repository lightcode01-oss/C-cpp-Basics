#include<iostream>
using namespace std;

class A{
    public:
A(){
    cout<<"Constructor of class A called"<<endl;//defult constructor
}
~A(){
    cout<<"Destructor of class A called"<<endl;//defult destructor
}
};

int main(){
    A obj;
    cout<<"complete main function"<<endl;
}
