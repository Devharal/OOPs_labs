#include <iostream>
#include <string>
using namespace std;

class Employee {
public:

    // Default constructor
    Employee() {
        name = "John Doe";
        employeeId = 0;
        salary = 0.0;
    }

    // Parameterized constructor
    Employee(string empName, int empId, double empSalary) {
        name = empName;
        employeeId = empId;
        salary = empSalary;
    }

    // Member function to display employee information
    void displayInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: $" << salary << endl;
    }

private:
    string name;
    int employeeId;
    double salary;
};

int main() {
    // Using default constructor
    Employee employee1; // Creates an employee object with default values
    cout << "Employee 1 (Default Constructor):" << endl;
    employee1.displayInfo();
    
    // Using parameterized constructor
    Employee employee2("Alice Smith", 1001, 50000.0); // Creates an employee object with specified values
    cout << "\nEmployee 2 (Parameterized Constructor):" << endl;
    employee2.displayInfo();
    
    return 0;
}

// Q2
// #include <iostream>
// #include <cmath>
// using namespace std;

// class Finder {
// public:
//     // Find area of a circle
//     double findArea(char r,double radius) {
//         return 3.14159265359 * radius * radius;
//     }

//     // Find area of a square
//     double findArea(double sideLength, bool isSquare = true) {
//         if (isSquare)
//             return sideLength * sideLength;
//         else {
//             cout << "Invalid choice. Use the findArea(double length, double width) function for rectangles." << endl;
//             return 0.0;
//         }
//     }

//     // Find area of a rectangle
//     double findArea(double length, double width) {
//         return length * width;
//     }
// };

// int main() {
//     Finder finder;
//     char r;
//     double circleArea = finder.findArea(r,5.0);
//     double squareArea = finder.findArea(4.0);
//     double rectangleArea = finder.findArea(6.0, 3.0);

//     cout << "Area of Circle: " << circleArea << endl;
//     cout << "Area of Square: " << squareArea << endl;
//     cout << "Area of Rectangle: " << rectangleArea << endl;

//     return 0;
// }