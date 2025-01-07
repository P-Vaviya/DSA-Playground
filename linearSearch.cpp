#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int value){
    for(int i = 0; i<size;i++){
        if (arr[i] == value){
            cout<<i;
        }
    }
}
int main(){
    int arr[]={}, size, value;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the value to find in array"<<endl;
    cin>>value;

    cout<<"Enter the Element in the array"<<endl;
    for(int i = 0; i<size;i++){
        cin>>arr[i];
    }
    linearSearch(arr, size, value);
}

