// Thomas McLean
// June 13, 2020
// Linked List implementations

#include <iostream>
#include "Linked_Lists.h"

using std::cout;   // Just want to load the ones I'm using
using std::endl;

// ---SINGLY LINKED LIST IMPLEMENATION---
Singly::Singly(){           // When I construct my list I want the head
    head = nullptr;
}

void Singly::Push(int key, int data){
    if (head == nullptr){
        head = new node;
        head->key = key;
        head->data = data;
        head->next = nullptr;
    }
    else {
        node* newNode = new node;
        newNode->key = key;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
}

void Singly::Pop(){
    if (head == nullptr){
        cout << "\n!!! Cannot Pop() from an empty list !!!\n"; // Do a little error checking now
    }
    else{
        node* tmp = head;
        cout << tmp->key << endl;
        cout << tmp->data <<endl;
        head = head->next;
        delete tmp;
    }
}

void Singly::showList(){
    node* tmp = head;
    cout << "Key" << "\tData" <<endl;
    while (tmp != nullptr){
        cout << tmp->key;
        cout << "   \t" << tmp->data << endl;
        tmp = tmp->next;
    }
}

Singly::~Singly(){
    while (head != nullptr){
        node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

// ---DOUBLY LINKED LIST IMPLEMENTATION---

void Doubly::Push(int key, int data){
    if (head == nullptr){               // If my list is empty just make a node with no neighbors
        head = new node;
        head->key = key;
        head->data = data;
        head->next = nullptr;
        head->prev = nullptr;           // Here is our prev pointer
    }
    else {
        node* newNode = new node;
        newNode->key = key;
        newNode->data = data;
        newNode->next = head;
        head->prev = newNode;           // This is where doubly comes in. The old node now links backwards to the newly created node
        head = newNode;
    }
}

void Doubly::Pop(){
    if (head == nullptr){
        std::cout << "\n!!! Cannot Pop() from an empty list !!!\n";
    }
    else{
        node* tmp = head;
        cout << tmp->key << endl;
        cout << tmp->data << endl;
        head = head->next;
        head->prev = nullptr;           // Now logically nothing exists behind the next node
        delete tmp;                     // Free the memory of the node we popped
    }
}

// ---CIRCULARLY LINKED LIST IMPLEMENTATION---
void Circularly::Push(int key, int data){
    if (head == nullptr){               // Start the first node
        head = new node;
        head->key = key;
        head->data = data;
        head->next = nullptr;
        head->prev = nullptr;
    }
    else {                              // I need to know where and what my head node is so I don't want to overwrite it like I did before
        node* newNode = new node;
        newNode->key = key;
        newNode->data = data;
        newNode->next = head;
        follower = newNode;             // Use the follower pointer to keep track of the last node
        head->prev = newNode;           // The prev pointer of head will follow the most recent node
        if (head->next = nullptr) {     // Only write the next pointer of head the first time it comes up
            head->next = newNode;
            newNode->prev = head;
        }else {
            newNode->prev = follower;
        }
    }
}

void Circularly::Pop(){                 // This will act the same as the others
    if (head == nullptr){
        std::cout << "\n!!! Cannot Pop() from an empty list !!!\n";
    }
    else{
        node* tmp = head;
        cout << tmp->key << endl;
        cout << tmp->data << endl;
        head = head->next;
        head->prev = nullptr;           // Now logically nothing exists behind the next node
        delete tmp;                     // Free the memory of the node we popped
    }

}

