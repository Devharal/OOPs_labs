// 1.	Write a function to find whether a given number is prime or not.

// 2.	Write a function which calculates sum of each digit.

// 3.	Use recursive function to find factorial of a given number.

// 4.	Write a function to find the largest divisor and return the same.


#include <iostream>
using namespace std;

// 1.	Write a function to find whether a given number is prime or not.
bool isPrime(int n) {
    if (n <= 1) {
        return false; 
    }
    
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    
    return true; 
}
// 2.	Write a function which calculates sum of each digit.
int sumOfDigits(int num) {
    int sum = 0;
    
    
    while (num > 0) {
        int digit = num % 10; 
        sum += digit; 
        num /= 10; 
    }
    
    return sum;
}
// 3.	Use recursive function to find factorial of a given number.
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}
// 4.	Write a function to find the largest divisor and return the same.
int largestDivisor(int num) {
    if (num <= 1) {
        return -1; 
    }

    int largest = 1; 

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            largest = i; 
        }
    }

    return largest;
}
int main(){
    
}