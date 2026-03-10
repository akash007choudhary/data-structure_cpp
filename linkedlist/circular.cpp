#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;
     Node* tail;

public:
    LinkedList() {
        head = tail=NULL;
    }

    // Insert at end
    // void insertAtEnd(int val) {
    //     Node* newNode = new Node(val);
    //     if (head == nullptr) {
    //         head = newNode;
    //         return;
    //     }
    //     Node* temp = head;
    //     while (temp->next != nullptr) {
    //         temp = temp->next;
    //     }
    //     temp->next = newNode;
    // }

    // Insert at beginning
    void insertAtBeginning(int val) {
          Node* newNode = new Node(val);
        if (head=NULL){
            head = tail = newNode;
            tail -> next = newNode;
        }
        else{
newNode->next = head;
        head = newNode;
        tail-> next = newNode;
        }
      
        
    }

    // Delete a node by value
    // void deleteNode(int val) {
    //     if (head == nullptr) return;

    //     // If head needs to be deleted
    //     if (head->data == val) {
    //         Node* temp = head;
    //         head = head->next;
    //         delete temp;
    //         return;
    //     }

    //     Node* temp = head;
    //     while (temp->next != nullptr && temp->next->data != val) {
    //         temp = temp->next;
    //     }

    //     if (temp->next == nullptr) return; // Not found

    //     Node* nodeToDelete = temp->next;
    //     temp->next = temp->next->next;
    //     delete nodeToDelete;
    // }

    // Display the list
    void display() {
        Node* temp = head-> next ;
        while (temp != head) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main() {
    LinkedList list;

    // list.insertAtEnd(10);
    // list.insertAtEnd(20);
    // list.insertAtEnd(30);

    // cout << "Linked List after insertions: ";
    // list.display();

    list.insertAtBeginning(5);
    cout << "After inserting at beginning: ";
    list.display();
     list.insertAtBeginning(9);
    cout << "After inserting at beginning: ";
    list.display();
     list.insertAtBeginning(8);
    cout << "After inserting at beginning: ";
    list.display();

    // list.deleteNode(20);
    // cout << "After deleting 20: ";
    // list.display();

    return 0;
}
