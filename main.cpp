#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /*
     * Print the value 333.546372 in a 15-character field with precisions of 1, 2 and 3.
     * Print each number on the same line. Left-justify each number in its field.
     * What three values print?
     */
    double value{333.546372};

    cout << fixed << left
        << setw(15) << setprecision(1) << value
        << setw(15) << setprecision(2) << value
        << setw(15) << setprecision(3) << value << endl;
}
