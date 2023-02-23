#include <iostream>
#include <iomanip>
using namespace std;

int main() // Enter specific input to escape.
{
    double Pi = 3.1415926535897932384626433832;
    cout << "Using 'cout << setprecision(3) in iomanip : " << setprecision(3) << Pi << endl; // 3.14
    cout << "Using 'cout << setprecision(4) in iomanip : " << setprecision(4) << Pi << endl; // 3.142 (ROUND OFF)
    cout << "Using 'cout << setprecision(6) in iomanip : " << setprecision(6) << Pi << endl; // 3.14159
        // 'cout << setprecision' and 'cout.precision' set the number of digits before and after the decimal point
    cout << endl;

    double num1 = 123.4536;
    cout.precision(3);
    cout << "Using 'cout.precision(3)' in iostream : " << num1 << endl; // 123
    cout.precision(4);
    cout << "Using 'cout.precision(4)' in iostream : " << num1 << endl; // 123.5 (ROUND OFF)
    cout.precision(6);
    cout << "Using 'cout.precision(6)' in iostream : " << num1 << endl; // 123.454 (ROUND OFF)

    // Difference between 'cout << setprecision' and 'cout.precision' is library(<iostream>, <iomanip>)
    return 0;
}