// Thomas McLean
// June 13, 2020
// Implementation of singly linked list.

// ---INCLUDES---
#include <cstdio> // I like using printf most of the time 

// ---NODE STRUCT--- Here I define the structure of my node

struct Node{                    // This could also be done as a class in a separate .h file
    int key;
    int data;
    Node* next;
};                              // Don't forget the ; at the end of structs in C++

// ---FUNCTION DEFINITIONS--- Starting simple with just push and pop

void Push(int key, int data, Node* head);   // Push an item to the linked list
void Pop(Node* head);                     // Remove an item from the linked list


// ---MAIN---
int main() {
    Node* head = nullptr; // Make my head node start out as null
    Push(1, 314756, head);
    Push(2, 513, head);
    Pop(head);
   
    
    return 0;
}

// ---PUSH---
void Push(int key, int data, Node* head){
    Node* newNode = new Node;   // Let's dynamically allocate a new node when we call this function
    newNode->key = key;         // Set our new node's key to the argument we passed
    newNode->data = data;       // Do the same for our passed data
    newNode->next = head;
    head = newNode;
}

// ---POP---