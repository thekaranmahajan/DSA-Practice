#include<iostream>
using namespace std;

class Node {
    public:
        int data; // Data part of the node
        Node* next; // Pointer to the next node

        Node(int value) { // Constructor to initialize the node
            data = value;
            next = NULL; // Intitally no next node
        }
};

int main()
{
    Node* head = new Node(10); // Create the First node
    head->next = new Node(20); // Create the second node and link it to the first
    head->next->next = new Node(30); // Create the third node and link it to the second
    
    Node* current = head; // Start from the head node
    while (current != NULL) {
        cout << "Data: " << current->data << " at address: " << current << endl; // Print the data of the current
        current = current->next; // Move to the next node
    }

    // Cleanup: Free memory
    Node* c = head;
    while (c != NULL) {
        Node* nextNode = c->next;  // Store next node before deletion
        cout << "Deleting node with value: " << c->data << endl;
        delete c;  // Free c node
        c = nextNode;  // Move to next node
    }

    head = NULL; // Set head to NULL after deletion
    cout << "Memory cleaned up!" << endl;

}