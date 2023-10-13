#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    double marks;

public:
    // Constructor to initialize the data members
    Student(int studentId, const string& studentName, double studentMarks)
        : id(studentId), name(studentName), marks(studentMarks) {}

    // Function to print student details
    void printStudentDetails() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;
    }
};

int main() {
    // Create a Student object
    Student student1(1, "John", 95.5);

    // Call the function to print student details
    student1.printStudentDetails();

    return 0;
}