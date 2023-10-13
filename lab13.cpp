#include <iostream>
using namespace std;

class Employee {
private:
    static int count; // Static variable to keep track of the number of employees
    int employeeId;
    string employeeName;

public:
    // Parameterized constructor
    Employee(string name) {
        employeeName = name;
        employeeId = ++count; // Assign a unique employee ID and increment count
    }

    // Copy constructor
    Employee(const Employee& other) {
        employeeName = other.employeeName + " (Copy)";
        employeeId = ++count; // Assign a new employee ID for the copy
    }

    // Member function to display employee details
    void display() {
        cout << "Employee ID: " << employeeId << ", Employee Name: " << employeeName << endl;
    }

    // Static member function to get the total count of employees
    static int getCount() {
        return count;
    }
};

// Initialize the static count variable
int Employee::count = 0;

int main() {
    // Create Employee objects
    Employee emp1("Alice");
    Employee emp2("Bob");

    // Display employee details
    emp1.display();
    emp2.display();

    // Create a copy of emp1 using the copy constructor
    Employee emp3 = emp1;

    // Display the copy's details
    emp3.display();

    // Get the total count of employees using the static member function
    cout << "Total Employees: " << Employee::getCount() << endl;

    return 0;
}