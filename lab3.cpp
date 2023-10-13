#include <iostream>
using namespace std;
// Lab -3
// 1) Write menu driven code using if-else to create a simple calculator
// 2) Write menu driven code using switch case to find area of 1. circle 2.Square 3. rectangle 4. triangle
// 3) Demonstrate the usage of pre and post increament and decreament operators

int main() {
    char operation;
    double num1, num2;

    
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;

    cout << "Operation: ";
    cin >> operation;

    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error! Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Invalid operation. Please choose +, -, *, or /." << endl;
    }

    return 0;
}

#include <cmath>

int main() {
        int choice;
        const double PI = 3.14159265359;


        cout << "Menu:\n";
        cout << "1. Circle\n";
        cout << "2. Square\n";
        cout << "3. Rectangle\n";
        cout << "4. Triangle\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: // Circle
                double radius;
                cout << "Radius: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Radius cannot be negative!\n";
                } else {
                    cout << "Area of the circle: " << PI * pow(radius, 2) << endl;
                }
                break;

            case 2: // Square
                double side;
                cout << "Lenght: ";
                cin >> side;
                if (side < 0) {
                    cout << "Side length cannot be negative!\n";
                } else {
                    cout << "Area of the square: " << pow(side, 2) << endl;
                }
                break;

            case 3: // Rectangle
                double length, width;
                cout << "Length: ";
                cin >> length;
                cout << "Width : ";
                cin >> width;
                if (length < 0 || width < 0) {
                    cout << "Length and width cannot be negative!\n";
                } else {
                    cout << "Area of the rectangle: " << length * width << endl;
                }
                break;

            case 4: // Triangle
                double base, height;
                cout << "Base Lenght: ";
                cin >> base;
                cout << "Height: ";
                cin >> height;
                if (base < 0 || height < 0) {
                    cout << "Base and height cannot be negative!\n";
                } else {
                    cout << "Area of the triangle: " << 0.5 * base * height << endl;
                }
                break;

            case 5: // Exit
                cout << "Exiting the program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option (1-5).\n";
        }
        return 0;
}


// 3) Demonstrate the usage of pre and post increament and decreament operators
int main(){
    int i=9;
    int j=9;

    if(i++==10&&++j==10){
        cout<<i<<" "<<j;
    }
    else {
        cout<<i<<" "<<j;
    }
}
