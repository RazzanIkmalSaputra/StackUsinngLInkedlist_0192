#include <iostream>

using namespace std;

//node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

//stack class
class stack {
private:
 Node* top; //pointer to the top node of the stack

public:
 stack() {
    top = NULL; //initialize the stack with a null top pointer
 }

 