// Thomas McLean
// June 13, 2020
// Linked List implementations

#include <iostream>
#include "Linked_Lists.h"

using std::cout;   // Just want to load the ones I'm using
using std::endl;

// ---SINGLY LINKED LIST IMPLEMENATION---
Singly::Singly(){           // When I construct my list I want the head and tail to be initialized to null
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
        std::cout << "\n!!! Cannot Pop() from an empty list !!!\n";
    }
    else{
        node* tmp = head;
        cout << tmp->key << endl;
        cout << tmp->data <<endl;
        head = head->next;
        delete tmp;
    }
}

Singly::~Singly(){
    while (head != nullptr){
        node* tmp = head;
        head = head->next;
        delete tmp;
    }
}