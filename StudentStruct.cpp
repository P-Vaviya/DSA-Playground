#include <iostream>
using namespace std;

struct Student{
    int roll_no, s1, s2, s3;
    string name;
    float total;


    void getData(){
        cout<<"Enter rollno, name, s1, s2, s3"<<endl;
        cin>>roll_no>>name>>s1>>s2>>s3;

    }

    void CalTotal(){
        total = s1 + s2 + s3;
    }

    void displayResult(){
        cout<<roll_no<<"\t\t"<<name<<"\t\t"<<s1<<"\t\t"<<s2<<"\t\t"<<s3<<"\t\t"<<total<<"\t\t"<<endl;
    }
};

int main(){
    Student s;
    Student *p;
    p = &s;
    (*p).getData();
    (*p).CalTotal();
    cout<<"Roll No."<<"\t"<<"Name"<<"\t\t"<<"s1"<<"\t\t"<<"s2"<<"\t\t"<<"s3"<<"\t\t"<<"total"<<"\t\t"<<endl;
    (*p).displayResult();
}