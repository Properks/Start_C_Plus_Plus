#include <iostream>
using namespace std;

int main()
{
    int value1;
    char spc = ' '; // Decalre a valuable

    cout << "Press three-digits number!! ";
    cin >> value1; // Input three-digits number

    cout << value1 << " is ";

    cout << (value1 / 100) << spc;
    value1 %= 100; // Output number that hundred's place number and delete it from valuable

    cout << (value1 / 10) << spc;
    value1 %= 10; // Output number that ten's place number and delete it from valuable

    cout << value1 << endl; // Output last number
}