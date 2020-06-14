# Pseudocode for linked lists

## Singly Linked List

### Push
``` 
function Push{
    create new node(allocate memory for new node if necessary);
    new node's key = argument key;
    new node's data = argument data;
    new node's pointer = location of previous head node;
    head points to location of new node;
}
```
### Pop
```
function Pop{
    temporary node points to head;
    print head node's information;
    point head to next node;
    (free temporary node's memory if needed)
}
```
    