// Thomas McLean
// June 13, 2020
// Header file for linked lists

// For a good preprocessor directive tutorial go here http://cplusplus.com/doc/tutorial/preprocessor/
#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

// ---NODE STRUCT--- Here I define the structure of my node

struct node{                    // This could also be done as a class, but easier as a struct
    int key;
    int data;
    node* next;
    node* prev;                 // Just need prev for doubly or circular lists
};                              // Don't forget the ; at the end of structs and classes in C++

// ---SINGLY LINKED CLASS---
class Singly{                   // I'll make a class for each type of linked list hopefully with some inheritance
private:
    node* head;
public:
    Singly();                           // My constructor
    virtual void Push(int key, int data);            // Adds a node
    void showList();                         // Shows the full contents of the list
    virtual void Pop();                              // Deletes and shows a node
    ~Singly();                          // I like to always put a destructor even though it may not do anything
};


// ---DOUBLY LINKED CLASS---
class Doubly : public Singly{           // This class will inherit Singly's constructors and destructors
private:
    node* head;
public: 
    void Push(int key, int data);       // I am able to use these to overwrite Singly's definitions because I declared them virtual in the Singly Class
    void Pop();
 
};


// ---CIRCULARLY LINKED CLASS--- 
class Circularly : public Singly{
private:
    node* head;
    node* follower;
public:
    void Push(int key, int data);
    void Pop();

};

#endif

