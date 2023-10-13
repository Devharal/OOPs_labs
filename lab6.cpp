// 1.	Write a function to swap two numbers using pointers.

// 2.	Write a function which finds nth power of a number and stores that value in a variable called as result. The function will accept the address of result via pointer.

// 3.	Demonstrate the use of pointer to a pointer concept.
#include <iostream>
using namespace std;

// 1.	Write a function to swap two numbers using pointers.
void swapNumbers(int *a, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;     
}
void calculateNthPower(int base, int exponent, int *result) {
    *result = 1; 
    
    for (int i = 1; i <= exponent; i++) {
        *result *= base; 
    }
}

int main() {
    int base, exponent, result;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    calculateNthPower(base, exponent, &result);

    cout << base << " raised to the power " << exponent << " is " << result << endl;

    return 0;
}
int main() {
    int value = 20285;
    int* ptr = &value; 
    int** ptr_to_ptr = &ptr; 

    // Display the values and addresses
    cout << "Value: " << value << endl;
    cout << "Address of value: " << &value << endl;

    cout << "Value via pointer: " << *ptr << endl;
    cout << "Address of pointer: " << &ptr << endl;

    cout << "Value via double pointer: " << **ptr_to_ptr << endl;
    cout << "Address of double pointer: " << &ptr_to_ptr << endl;

    return 0;
}