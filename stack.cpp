#include <iostream>
using namespace std;

int top = -1;

void push(int arr[], int val){
    arr[top+1] = val;
    cout<<"Data added to the array at "<<top+1<<endl;
    cout<<arr[0];
}

int main(){
    int arr[100];
    push(arr,45);

    return 0;
}