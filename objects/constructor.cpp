#include<iostream>
using namespace std;

class book{
    public:
    string name;
    string author;
    int edition;
    
    //Defult constructor
    // book(){//constructor
    //     cout<<"defult constructor called while creating object";
    // }


    //parameterised construtor
    book(string n, string a, int e){//constructor
        name = n;
        author = a;
        edition = e;
    }
};

int main(){
    book b1("C++","Abhinav",3);
    
    cout<<"Book Name : "<<b1.name<<endl;
    cout<<"Author Name : "<<b1.author<<endl;
    cout<<"Edition : "<<b1.edition<<endl;
}
