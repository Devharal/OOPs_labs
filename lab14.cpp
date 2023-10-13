#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    Address(const string& street, const string& city, const string& state, const string& pincode)
        : street(street), city(city), state(state), pincode(pincode) {}

    void printAddress() const {
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
    Student(const string& name, int age, const Address& address)
        : name(name), age(age), address(address) {}

    void printStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: ";
        address.printAddress();
    }

private:
    string name;
    int age;
    Address address;
};

int main() {
    Address studentAddress("123 Main St", "Some City", "CA", "12345");
    Student student("John Doe", 20, studentAddress);

    student.printStudentInfo();

    return 0;
}