#include <iostream>
using namespace std;

void Enqueue(int &F, int &R, int queue[]){
int n = sizeof(queue)/sizeof(queue[0]);
    if(F==0 && R==n-1){
        cout<<"The queue is full "<<endl;
    }
    else{
        if(F==-1 && R==-1){
            F=R=0;
            cout<<"Enter the data: "<<endl;
            cin>>queue[R];
            R++;

        }
        else{
            R++;
            cout<<"Enter the data: "<<endl;
            cin>>queue[R];
        
        }
    }

}

void Dequeue(int &F, int &R, int queue[]){
    int n = sizeof(queue)/sizeof(queue[0]);
    if(F==-1 && R==-1){
        cout<<"The queue is empty "<<endl;
    }
    else{
        F++;
    }
    
}

void Peek(int &F,int &R, int queue[]){
    
    if(F==-1 && R==-1){
        cout<<"The queue is empty "<<endl;
    }
    else{
        cout<<queue[F]<<endl;
        } 

}

void Display(int &F,int &R, int queue[]){
    int n = sizeof(queue)/sizeof(queue[0]);
    if(F==-1 && R==-1){
        cout<<"The queue is empty "<<endl;
    }
    else{
        for(int i = 0; i<n;i++){
        cout<<queue[i];
        } 
    }

}

void Empty(int &F,int &R, int queue[]){
    if(F==-1 && R==-1){
        cout<<"The queue is empty "<<endl;
    }
    else{
        cout<<"It is not empty "<<endl;
    }

}

void Full(int &F,int &R, int queue[]){
    int n = sizeof(queue)/sizeof(queue[0]);
    if(F==-1 && R==n-1){
        cout<<"The queue is full "<<endl;
    }
    else{
        cout<<"The queue is not full "<<endl;
        } 
    }





int main(){
    int F = -1, R = -1, opt;
    int queue[100];
    bool oppt = true;


    do{
        cout<<"1. Insert element"<<endl;
        cout<<"2. Delete element"<<endl;
        cout<<"3. Element at first node"<<endl;
        cout<<"4. Display queue"<<endl;
        cout<<"5. Empty or What ?"<<endl;
        cout<<"6. Full or what ?"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>opt;

        switch(opt){
            case 1:
            Enqueue(F, R, queue);
            break;

            case 2:
            Dequeue(F, R, queue);
            break;

            case 3:
            Peek(F, R, queue);
            break;

            case 4:
            Display(F, R, queue);
            break;

            case 5:
            Empty(F, R, queue);
            break;

            case 6:
            Full(F, R, queue);
            break;

            default:
            oppt = false;


        }
    }
    while(oppt != false);
}