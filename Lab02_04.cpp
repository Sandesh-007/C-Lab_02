#include <iostream>
using namespace std;

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

    // Prompt the user to enter the new temperature, and assign it to the larger variable
    cout << "Enter new temperature to replace the larger one: ";
    cin >> larger(temp1, temp2);

    // Output the results
    cout << "Temp1: " << temp1 << ", Temp2: " << temp2 << endl;

    return 0;
}
