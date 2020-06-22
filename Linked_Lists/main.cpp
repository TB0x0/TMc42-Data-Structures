// Thomas McLean
// June 13, 2020
// main file for testing the linked lists.

#include "Linked_Lists.cpp"

// ---MAIN---
int main() {
    Singly singlyLinked;
    singlyLinked.Push(1, 345);
    singlyLinked.Push(4, 123123);
    singlyLinked.Push(9, 985);
    singlyLinked.Push(3, 98766);
    singlyLinked.showList();
/*
    Doubly doublyLinked;
    doublyLinked.Push(3, 688756);
    doublyLinked.Pop();
*/
    return 0;
}