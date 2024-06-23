#include <iostream>
using namespace std;

namespace Square {
    int num;
    int fun(int x) { return x * x; }
}

namespace Cube {
    int num;
    int fun(int x) { return x * x * x; }
}

int main() {
    // Prompt the user to input the numbers
    cout << "Enter a number for Square: ";
    cin >> Square::num;

    cout << "Enter a number for Cube: ";
    cin >> Cube::num;

    // Calculate and print the results
    cout << "Cube::fun(Square::num): " << Cube::fun(Square::num) << endl;
    cout << "Square::fun(Cube::num): " << Square::fun(Cube::num) << endl;

    return 0;
}
