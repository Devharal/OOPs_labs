#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float ta;
    float salary;

public:
    Employee() {
        id = 0;
        basicSalary = 0.0f;
        hra = 0.0f;
        da = 0.0f;
        ta = 0.0f;
        salary = 0.0f;
    }

    void inputDetails() {
        cout << "Enter employee ID: ";
        cin >> id;
        cin.ignore(); // Clear the input buffer
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        hra = 0.18f * basicSalary;
        da = 0.07f * basicSalary;
        ta = 0.03f * basicSalary;
        salary = basicSalary + hra + da + ta;
    }

    void printDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "TA: " << ta << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

int main() {
    
    Employee employee;

    
    employee.inputDetails();
    employee.calculateSalary();
    employee.printDetails();

    return 0;
}
