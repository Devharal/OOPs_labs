// Wirte program to print successive powers (starting 2) of number entered by user till 5
// write a program to find factorial of a number
// print the first 100 prime numbers along with their count
//  Write program to add a number with its next number (assume staring 1) till user enters a value1

#include <iostream>
using namespace std;
#include <cmath> 
int main() {
    double base;

    cout << "Enter a number: ";
    cin >> base;

    
    for (int exponent = 2; exponent <= 5; ++exponent) {
        double result = pow(base, exponent);
        cout << base << " raised to the power of " << exponent << " is: " << result << endl;
    }

    return 0;
}


int main() {
    int number;
    long long factorial = 1; 

    
    cout << "Enter a positive integer: ";
    cin >> number;

    
    if (number < 0) {
        cout << "Factorial is not defined" << endl;
    } else {
        
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}


int main() {
    int count = 0; 
    int number = 2; 

    cout << "The first 100 prime numbers:" << endl;

    while (count < 100) {
        bool isPrime = true; 

        
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break; 
            }
        }

        if (isPrime) {
            cout << number << " ";
            count++;
        }
        number++;
    }

    cout << "\nTotal prime numbers found: " << count << endl;

    return 0;
}


int main() {
    int value1;
    int sum = 0;
    int nextNumber = 1;

   
    cout << "Enter a value (value1): ";
    cin >> value1;

    
    if (value1 < 0) {
        cout << "Please enter a non-negative value1." << endl;
        return 1; 
    }

    
    while (nextNumber <= value1) {
        sum += nextNumber;
        nextNumber++;
    }

   
    cout << "The sum of numbers from 1 to " << value1 << " is: " << sum << endl;

    return 0;
}





