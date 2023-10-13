#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    Address(string street, string city, string state, string pincode)
        : street(street), city(city), state(state), pincode(pincode) {}

    void displayAddress() {
        cout << street << ", " << city << ", " << state << " " << pincode << endl;
    }

private:
    string street;
    string city;
    string state;
    string pincode;
};

class Student {
public:
    Student(string name, int age, Address address)
        : name(name), age(age), address(address) {}

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: ";
        address.displayAddress();
    }

private:
    string name;
    int age;
    Address address;
};

int main() {
    const int numStudents = 3;
    Student students[numStudents] = {
        Student("John Doe", 20, Address("123 Main St", "City1", "State1", "12345")),
        Student("Jane Smith", 22, Address("456 Elm St", "City2", "State2", "56789")),
        Student("Bob Johnson", 21, Address("789 Oak St", "City3", "State3", "98765"))
    };

    // Display student information
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << " Information:" << endl;
        students[i].displayStudentInfo();
        cout << endl;
    }

    return 0;
}