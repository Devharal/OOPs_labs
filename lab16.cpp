// Lab->16
#include <iostream>
using namespace std;
class Stack {
private:
    int maxSize;
    int* stackArray;
    int top; 
    
public:
    Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1; 
    }

    bool isEmpty() {
        return top == -1;
    }

    
    bool isFull() {
        return top == maxSize - 1;
    }

  
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << value << endl;
            return;
        }
        stackArray[++top] = value;
    }

    
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1; 
        }
        return stackArray[top--];
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1; 
        }
        return stackArray[top];
    }
};

int main() {
    Stack myStack(5); 

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);

    cout << "Check empty :" << (myStack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Check full : " << (myStack.isFull() ? "Yes" : "No") << endl;

    cout << "Popped: " << myStack.pop() << endl;
    cout << "Popped: " << myStack.pop() << endl;
    cout << "Popped: " << myStack.peek() << endl;

}
