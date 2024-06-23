#include <iostream>
using namespace std;

// Function to calculate the new salary
double calculateNewSalary(double currentSalary, double incrementPercentage) // better to put a default value for incrementPercentage such as 0
{ 
    return currentSalary * (1 + incrementPercentage / 100);
}

int main() {
    // Salaries in year 2009
    double ceoSalary = 35000;
    double ioSalary = 25000;
    double saSalary = 24000;
    double progSalary = 18000;

    // Calculating new salaries for the year 2010
    cout << "CEO new salary: Rs. " << calculateNewSalary(ceoSalary, 9) << " /m" << endl;
    cout << "Information Officer new salary: Rs. " << calculateNewSalary(ioSalary, 10) << " /m" << endl;
    cout << "System Analyst new salary: Rs. " << calculateNewSalary(saSalary, 12) << " /m" << endl;
    cout << "Programmer new salary: Rs. " << calculateNewSalary(progSalary, 12) << " /m" << endl;

    return 0;
}
