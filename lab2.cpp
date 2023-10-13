#include <iostream>
using namespace std;



int main(){
    double basicSalary, hra, da, ta, Salary;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    
    hra = (float)0.18 * basicSalary;
    da = 0.15 * basicSalary;
    ta = 0.10 * basicSalary;

    
    Salary = basicSalary + hra + da + ta;

    // Display the results
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "HRA: " << hra << endl;
    cout << "DA: " << da << endl;
    cout << "TA: " << ta << endl;
    cout << "Salary: " << Salary << endl;

    return 0;


    int marks,percentage;
    cin>>marks;

    percentage=marks;
    cout<<percentage<<"%"<<endl;


    if(percentage<=39){
        cout<<"D";
    }
    else if (percentage > 39 && percentage <= 59) {
    cout << "C";
    }   else if (percentage > 59 && percentage <= 74) {
    cout << "B";
    }   else {
    cout << "A";
    }

    // post and pre operators
    // i++ in future
    // int i,j=10; 
    // if(i++==10&& ++j==10){
    //     cout<<i<<j;
    // }
}