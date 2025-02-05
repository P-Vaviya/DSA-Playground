#include <iostream>
using namespace std;

struct Student{
    private:
    int roll_no, s1, s2, s3;
    string name;
    float total;

    public:

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
    Student s[5];

    for(int i = 0; i<4; i++){
    s[i].getData();
    s[i].CalTotal();
    }

    cout<<"Roll No."<<"\t"<<"Name"<<"\t\t"<<"s1"<<"\t\t"<<"s2"<<"\t\t"<<"s3"<<"\t\t"<<"total"<<"\t\t"<<endl;

    for(int i = 0; i<4;i++){
        s[i].displayResult();
    }
}