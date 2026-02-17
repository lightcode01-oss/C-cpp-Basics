//WAP to print your biodata

#include<iostream>
using namespace std;
int main(){
    // cout<<"Name : Harry \n";
    // cout<<"Age : 18 \n";
    // cout<<"Qualification : 12th Passed \n";
    // cout<<"Institue : Centurion University of Technology and Management \n";

    string name, age, qualification, institute;
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your qualification : ";
    cin>>qualification;
    cout<<"Enter your institute : ";
    cin>>institute;
    cout<<"Name is : " << name << "\n";
    cout<<"Age is : " << age << "\n";
    cout<<"Qualification : " << qualification << "\n";
    cout<<"Institute : " << institute << "\n";
}