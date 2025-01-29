#include <iostream>
using namespace std;


void count(int a[], int size){
    cout<<"There are "<<size<<" elements present "<<endl;


}


int main(){
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    count(arr, size);
}