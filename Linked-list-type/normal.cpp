// normal linked list
#include <iostream>
using namespace std;

// 1. Encapsulation: The Node class represents a single element
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node with data and set next to NULL
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// 2. The LinkedList class manages the nodes and operations
class LinkedList {
private:
    Node* head; // Private data member to hide the starting point (Data Hiding)

public:
    // Constructor initializes an empty list
    LinkedList() {
        head = nullptr;
    }

    // Function to build a fixed 4-node list with user input
    void createFourNodes() {
        int val;

        // Get input and build Node 1
        cout << "Enter data for Node 1: ";
        cin >> val;
        head = new Node(val); 

        // Get input and build Node 2
        cout << "Enter data for Node 2: ";
        cin >> val;
        head->next = new Node(val);

        // Get input and build Node 3
        cout << "Enter data for Node 3: ";
        cin >> val;
        head->next->next = new Node(val);

        // Get input and build Node 4
        cout << "Enter data for Node 4: ";
        cin >> val;
        head->next->next->next = new Node(val);
        
        // Node 4's 'next' is automatically set to nullptr by the Node constructor!
    }

    // Function to display the linked list
    void printList() {
        Node* temp = head; // Start from the head
        
        cout << "\nYour Linked List: " << endl;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next; // Move to the next node
        }
        cout << "NULL" << endl;
    }

    // Destructor to automatically clean up memory when the object goes out of scope
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current; // Freeing memory using C++ delete
            current = nextNode;
        }
    }
};

// 3. Execution block
int main() {
    // Create a LinkedList object
    LinkedList myList;

    // Call class methods to take input and show results
    myList.createFourNodes();
    myList.printList();

    return 0; // Destructor is automatically called here to clean up memory!
}
