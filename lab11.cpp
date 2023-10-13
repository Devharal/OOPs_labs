#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int id;
    string name;
    float percentage;
    char grade;

public:
    // Getter methods
    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    float getPercentage() {
        return percentage;
    }

    char getGrade() {
        return grade;
    }

    // Setter methods
    void setId(int newId) {
        id = newId;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setPercentage(float newPercentage) {
        percentage = newPercentage;
    }

    void setGrade(char newGrade) {
        grade = newGrade;
    }

    // Function to calculate grade based on percentage
    void calculateGrade() {
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 80) {
            grade = 'B';
        } else if (percentage >= 70) {
            grade = 'C';
        } else if (percentage >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }

    // Function to input student details, calculate grade, and print details
    void inputDetails() {
        cout << "Enter student ID: ";
        cin >> id;
        cin.ignore();  // Clear the input buffer
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student percentage: ";
        cin >> percentage;
        calculateGrade();  // Calculate grade based on percentage
    }

    // Function to print student details
    void printStudent() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Percentage: " << percentage << endl;
        cout << "Student Grade: " << grade << endl;
    }
};

int main() {
    // Create an instance of the Student class
    Student student;

    // Input student details and calculate grade
    student.inputDetails();

    // Print student details
    student.printStudent();

    return 0;
}
