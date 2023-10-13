// 1.	Write a function to find the greatest number in the array.

// 2.Write a function which finds all odd numbers from an array and store them in another array. Assume max size of original array is 10. No garbage values should be present in the odd array.

// 3.Demonstrate the use of pointer arithmetic by re writing the squarer function.
#include <iostream>
using namespace std;


int findGreatestNumber(const int arr[], int size) {
    
    int maxNumber = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i]; 
        }
    }

    return maxNumber;
}
void findOddNumbers(int arr[], int size, int oddarr[], int& oddSize) {
    oddSize = 0; 

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            if (oddSize < 10) {
                oddarr[oddSize] = arr[i]; 
                oddSize++; 
            } else {
                cout << "Odd array is full. Ignoring additional odd numbers." << std::endl;
                break; 
            }
        }
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int oddarr[10];
    int oddsize;

    findOddNumbers(arr, size, oddarr, oddsize);

    cout << "Odd numbers in the original array are: ";
    for (int i = 0; i < oddsize; ++i) {
        cout << oddarr[i] << " ";
    }
}
