#include <iostream>
using namespace std;

struct Date {
    int mm, dd, yy;
};

void printDate(const Date &d) {
    cout << d.mm << '/' << d.dd << '/' << d.yy << endl;
}

int main() {
    Date date = {11, 28, 2004};
    printDate(date);
    return 0;
}
