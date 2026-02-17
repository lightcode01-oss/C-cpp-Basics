#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,15,20,25,30};
    cout<<arr[3]<<endl;//this will give the value of index 3 i.e. 25
    // cout<<sizeof(arr);//1st element is of 4bit then there are 5 element so 4*5
    for(int temp:arr){
        cout<<temp<<endl;
    }
    
}





