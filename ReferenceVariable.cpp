#include <iostream>
using namespace std;

int main(){

    int Num = 88;
    int &refNum = Num;

    cout<<Num<<endl;
    cout<<refNum<<endl;

    refNum = 99;

    cout<<refNum<<endl;
    cout<<Num<<endl;

    Num = 55;

    cout<<Num<<endl;
    cout<<refNum<<endl;


    return 0;
}