#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout <<"nullptr"<< endl;
    }

    void deleteAllOccurrences(int target) {
        Node* current = head;
        Node* prev = nullptr;

        while (current) {
            if (current->data == target) {
                if (prev) {
                    prev->next = current->next;
                    delete current;
                    current = prev->next;
                } else {
                    Node* temp = current;
                    current = current->next;
                    delete temp;
                    head = current;
                }
            } else {
                prev = current;
                current = current->next;
            }
        }
    }

    void deleteLastOccurrence(int target) {
        Node* current = head;
        Node* last = nullptr;
        Node* prev = nullptr;

        while (current) {
            if (current->data == target) {
                last = current;
            }
            current = current->next;
        }

        if (last) {
            if (last == head) {
                head = head->next;
                delete last;
            } else {
                prev = head;
                while (prev->next != last) {
                    prev = prev->next;
                }
                prev->next = last->next;
                delete last;
            }
        }
    }

    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }

private:
    Node* head;
};

int main() {
    LinkedList myList;

    // Insert elements into the linked list
    myList.insert(8);
    myList.insert(5);
    myList.insert(2);
    myList.insert(3);
    myList.insert(4);
    myList.insert(5);
    myList.insert(4);
    myList.insert(3);
    myList.insert(2);
    myList.insert(1);

    cout << "Original List: ";
    myList.display();

    myList.deleteAllOccurrences(2);
    myList.display();

    myList.deleteLastOccurrence(3);
    myList.display();

    myList.reverse();
    cout << "Reversed List: ";
    myList.display();

    return 0;
}
