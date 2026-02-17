#include<iostream>
using namespace std;

int main(){
    int start,end;
    cout<<"Enter the starting Point : ";
    cin>>start;
    cout<<"Enter the ending Point : ";
    cin>>end;

    for(start ; start<=end;start++){
        if(start%2==0){
            cout<<"num :" << start << "is a even number" << endl;
        }else{
            cout<<"num :" << start << "is a odd number" << endl;
        }
    }
}