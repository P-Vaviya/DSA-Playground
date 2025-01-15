#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
    int temp;
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"The sorted array is :"<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    int arr[]={1,3,5,4,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, size);
    return 0;
}