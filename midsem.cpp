#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Function to calculate the sum of the digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    std::cout << "Prime numbers between 1 and 1000 and their sum of digits:" << std::endl;

    for (int i = 1; i <= 1000; ++i) {
        if (isPrime(i)) {
            int digitSum = sumOfDigits(i);
            std::cout << i << " (Sum of digits: " << digitSum << ")" << std::endl;
        }
    }

    return 0;
}
