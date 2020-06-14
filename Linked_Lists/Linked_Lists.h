// Thomas McLean
// June 13, 2020
// Header file for linked lists

// For a good preprocessor directive tutorial go here http://cplusplus.com/doc/tutorial/preprocessor/
#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

// Here Im going to attempt an OOP implementation of linked lists after I do a simpler non-oop one
// ---NODE STRUCT--- Here I define the structure of my node

struct node{                    // This could also be done as a class in a separate .h file
    int key;
    int data;
    node* next;
};                              // Don't forget the ; at the end of structs in C++

class Singly{                   // I'll make a class for each type of linked list hopefully with some inheritance
private:
    node* head;
public:
    Singly();                           // My constructor
    void Push(int key, int data);            // Adds a node
    void showList();                         // Shows the full contents of the list
    void Pop();                              // Deletes and shows a node
    ~Singly();                          // I like to always put a destructor even though it may not do anything
};

#endif

