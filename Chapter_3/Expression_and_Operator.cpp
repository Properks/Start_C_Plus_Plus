#include <iostream>
using namespace std;

int main()
{
    int value1; // Declare valuable
    cout << "Enter one number!! "; // Input one number
    cin >> value1;

    cout << value1;
    cout << " is " << ((value1 > 0) ? "Positive number" : (value1 == 0) ? "Zero" : "Negative number");
    // Check the number is positive or not with conditional operator. if not,check it is zero or negative again and output result. 
    cout << endl;
}