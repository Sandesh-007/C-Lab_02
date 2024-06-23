#include <iostream>
using namespace std;

// Function to return a reference to the larger of two double variables
double& larger(double &a, double &b) {
    return (a > b) ? a : b;
}

int main() {
    double temp1, temp2;

    // Prompt the user to enter the initial temperatures
    cout << "Enter temperature 1: ";
    cin >> temp1;

    cout << "Enter temperature 2: ";
    cin >> temp2;

    // Declare a reference variable to the larger of the two temperatures
    double &largerTemp = larger(temp1, temp2);

    // Prompt the user to enter a new temperature to replace the larger one
    cout << "Enter new temperature: ";
    cin >> largerTemp;

    // Output the resulting temperatures
    cout << "Temp1: " << temp1 << ", Temp2: " << temp2 << endl;

    return 0;
}
