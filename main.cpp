#include <iostream>
using namespace std;

int main() {
    // First part: Multiplication Table using while loops
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j++;
        }
        cout << endl;
        i++;
    }

    // Second part: Printing triangle pattern using for loops
    cout << "\nTriangle Pattern:\n";
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
