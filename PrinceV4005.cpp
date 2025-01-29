#include <iostream>
using namespace std;


void high_num(int arr[], int size){

    for(int i = 0; i<((size)-1);i++){

        if(arr[i] > arr[i+1]){
            arr[i+1] = arr[i] + arr[i+1];
            arr[i] = arr[i+1] - arr[i];
            arr[i+1] = arr[i+1] - arr[i];
        }

    }

}

int main(){
    int arr1[] = {3, 2, 4, 6, 2, 3, 4};
    int size = sizeof(arr1)/sizeof(arr1[0]);

    for(int i = 0;i<size;i++){
        high_num(arr1, size);
    }
    
    for(int i =0;i<size;i++){
        cout<<arr1[i]<<endl;

    }
    cout<<" "<<endl;
    cout<<"The second largest element is "<<arr1[size-2];
}
    

