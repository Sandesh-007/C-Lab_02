#include <iostream>
using namespace std;

// Inline function to calculate net payment after tax
inline void displayNetPayment(double salary) {
    double netPayment = salary * 0.9; // 10% tax deducted
    cout << "Net payment to the employee after tax: " << netPayment << endl;
}

int main() {
    double salary;

    // Input from user
    cout << "Enter employee salary: ";
    cin >> salary;

    // Display net payment using inline function
    displayNetPayment(salary);

    return 0;
}
