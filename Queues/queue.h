// Thomas McLean
// February, 17 2021
// Header file for a queue

// For a good preprocessor directive tutorial go here http://cplusplus.com/doc/tutorial/preprocessor/
#ifndef QUEUE_H
#define QUEUE_H

using std::cout;

struct node{
    int data;
    Node* next;

    // The constructor is called when a new node is created
    node(int argdata){
        data = argdata;
        next = NULL;
    }
}

class Queue{
private:
    node *front;
    node *rear;

public:
    // Constructor for class Queue, I set both front and rear values to null since the queue is empty
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    // The function to enqueue a new node
    void enQ(int argdata){
        // Create a temporary pointer to store a new node
        node* tmp = new node(argdata);

        // Check if the queue is empty: if my rear is pointing to null there is nothing in the queue
        if (rear == nullptr){
            // If it is set my rear and front to the new node
            rear = tmp;
            front = tmp;
        }
        else{
            // If the queue is not empty set the current nodes next pointer to the new node and make the new node rear
            rear->next = tmp;
            rear = tmp;
        }
    }

    // The function to dequeue a node
    void deQ(){
        // if the queue is empty don't do anything and tell me its empty
        if (front == nullptr){
            cout << "You cannot dequeue from an empty queue."; // Make the error message actually somewhat useful

        }
    }


}