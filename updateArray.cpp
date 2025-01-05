#include <iostream>

using namespace std;

int main(){
    int arr[4]={0, 1, 0, 0}, element, index;
    cout<<"The array before update is : "<<endl;
    for(int i = 0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<endl;
    }

    cout<<"Enter the element you want to update "<<endl;
    cin>>element;

    cout<<"Enter the index you want to update "<<endl;
    cin>>index;

    arr[index]=element;

    cout<<"The array after update is : "<<endl;
    for(int i = 0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}