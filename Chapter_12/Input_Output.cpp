#include <iostream>
using namespace std;

int main() // Enter specific input to escape.
{
    char *PTRstr;
    char ch;
    PTRstr = new char [100];
    // `cin >> ch;` ignore 'space', but `ch = cin.get();` doesn't ignore 'space'
    cout << "Enter string with space : "; // Suppose to enter "Nick, Amy"
    cin.getline(PTRstr, 100, ','); // 'PTRstr' is 'Nick' and cursor behind ','.

    cin >> ch; // If I use `ch = cin.get();` first, 'ch' will be ' '(space).
    cout << "cin >> ch : " << ch << endl; // output is A (because `cin >> ch` ignore 'space').

    ch = cin.get(); // If I use `ch = cin.get();` first, 'ch' will be 'A'.
    cout << "cin.get() : " << ch << endl; // Output is 'm'.

    delete [] PTRstr;
    return 0;
}