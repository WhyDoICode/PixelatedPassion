/*

Write a program to implement a stack data structure using a linked list.

*/


#include <iostream>

using namespace std;

// Define a node struct
struct Node {
    int value;
    Node* next;
};

// Define a Stack class
class Stack {
private:
    Node* top;



public:
    // Constructor to initialize an empty stack
    Stack() {
        top = nullptr;
    }

    // Push a value onto the stack
    void push(int value) {
        Node* node = new Node;
        node->value = value;
        node->next = top;
        top = node;
    }

    // Pop a value from the stack
    int pop() {
        if (top == nullptr) {
            throw "Stack is empty";
        }
        int value = top->value;
        Node* temp = top;
        top = top->next;
        delete temp;
        return value;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Print the stack
    void print() {
        Node* current = top;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};



int main() {
  
       Stack stack;

    // Push values onto the stack
    stack.push(5);
    stack.push(10);
    stack.push(15);

    // Print the stack
    stack.print(); // Output: 15 10 5

    // Pop a value from the stack
    int value = stack.pop();
    cout << "Popped value: " << value << endl; // Output: Popped value: 15

    // Print the stack
    stack.print(); 
 
    
    return 0;
}