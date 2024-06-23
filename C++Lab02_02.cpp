#include <iostream>
using namespace std;

// Function with no argument
void feetToInches() {
    double feet;
    cout << "Enter feet: ";
    cin >> feet;
    cout << feet << " feet = " << feet * 12 << " inches" << endl;
}

// Function with one argument (pass by value)
void feetToInches(double feet) {
    cout << feet << " feet = " << feet * 12 << " inches" << endl;
}

// Function with two arguments (pass by reference)
void feetToInches(double &feet, double &inches) {
    inches = feet * 12;
}

int main() {
    // Using function with no argument
    feetToInches();

    // Using function with one argument
    double feet = 5.5;
    feetToInches(feet);

    // Using function with two arguments
    double feet2 = 6.2;
    double inches;
    feetToInches(feet2, inches);
    cout << feet2 << " feet = " << inches << " inches" << endl;

    return 0;
}
