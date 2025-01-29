#include <iostream>
using namespace std;

int main(){
    int *ptr, num=88;

    ptr = &num;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<num<<endl;

    *ptr = 99;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<num<<endl;

}