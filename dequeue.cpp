#include <iostream>
using namespace std;

int MAX=5;
int deque1[5];
int front = -1;
int rear = - 1;

int isFull(){
    return ((front == 0 && rear == MAX -1 || front == rear + 1));
}

int isEmpty(){
    return (front == -1);
}

void insertFront(int key){
    if(isFull()){
        cout<<"Overflow: Unable to insert element at the front. Deque is full"<<endl;
        return;
    }

    if(front == -1){   
        front = 0;
        rear = 0;
    } else if (front == 0){
        front = MAX - 1;   
    } else {
        front = front - 1;
    }

    deque1[front] = key;
    cout << "\nInserted at the front. " << key << "\t";
}


void insertRear(int key){
    if(isFull()){
        cout<< "Overflow: Unable to insert element at the rear. Deque is full"<<endl;
        return;
    }

    if(front == -1){    // If deque is initially empty
    front = 0;
    rear = 0;
    } else if (rear == MAX - 1){
        rear = 0;    // wrap around
    } else {
        rear = rear + 1;
    }

    deque1[rear] = key;
    cout << "\nInserted at the rear. " << key << "\t";
}

//Function to delete an element from the front of the deque
void deleteFront(){
    if(isEmpty()){
        cout<<"Underflow: Unable to delete element from the front. Deque is empty. "<<endl;
        return;
    }

    int removed = deque1[front];

    if(front == rear){  //Deque has only one element
        front = -1;
        rear = -1;
    }else if(front == MAX -1){
    front = 0; //Wrap around
    } else{
        front = front + 1;
    }

    cout <<"\nDeleted from the front. " << removed;
}

//Function to delete an element from the rear of the deque
void deleteRear(){
    if(isEmpty()){
        cout<<"Underflow: Unable to delete element from the rear. Deque is empty. \n";
        return;
    }

    int removed = deque1[rear];

    if(front == rear){ //Deque has only one element
        front = -1;
        rear = -1;
    } else if(rear==0){
        rear = MAX - 1; //Wrap around
    } else {
        rear = rear - 1;
    }

    cout << "Deleted from the rear. "<< removed;
}

//Function to display the queue
void displayDeque(){
    if(isEmpty()){
        cout << "Deque is empty. \n" << endl;
        return;
    }

    cout << "\nDeque elements are: ";
    int i = front;
    while(1){
        cout << deque1[i]<<"\t";
        if (i == rear)
            break;
        i = (i+1) % MAX;
    }
    cout << "\n";
}

//Main Function to test the operations
int main(){
    
    insertRear(5);
    displayDeque();

    insertFront(15);
    displayDeque();

    insertRear(25);
    displayDeque();

    deleteFront();
    displayDeque();

    deleteRear();
    displayDeque();

    return 0;
}