#include<iostream>
using namespace std;

class A{
    public:
    void m1(){
        cout<<"This is method of class A"<<endl;
    }   
};

class B : public A{
    


};


int main(){

    B obj;
    cout<<"obj .m1() called : ";
    obj.m1();  // calling method of class A using object of class B

}