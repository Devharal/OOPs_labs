#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void append(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }

    void prepend(int data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }

    void insertAfter(int data_to_insert_after, int data) {
        Node* new_node = new Node(data);
        if (!head) {
            cout << "The list is empty." << endl;
            return;
        }

        Node* current = head;
        while (current) {
            if (current->data == data_to_insert_after) {
                new_node->next = current->next;
                current->next = new_node;
                return;
            }
            current = current->next;
        }

        // If the loop completes and the value is not found, print a message.
        cout << "Node doesn't exist." << endl;
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList my_list;
    my_list.append(1);
    my_list.append(2);
    my_list.append(3);
    my_list.display();

    my_list.prepend(0);
    my_list.display();

    my_list.insertAfter(2, 5);
    my_list.display();

    my_list.insertAfter(4, 7);

    return 0;
}
