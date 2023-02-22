#include <iostream>
using namespace std;

int main() // Enter specific input to escape.
{
    char *strptr;
    strptr = new char [100];
    cout << "Enter a string : "; //If I enter Amy,John,Jenny,Nick
    for (int i = 0; i < 2; i++)
    {
        cin.getline(strptr, 100, ','); // cin.getline will enter `Amy` to strptr and cursor behind ',' 
        cout << strptr << endl;
    }
    for (int j = 0; j < 2; j++)
    {
        cin.get(strptr, 100, ','); // cin.getline will enter `Amy` to strptr and cursor on ',' 
        cout << strptr << endl; // So, Nick didn't enter to strptr.
    }
    delete [] strptr;
    return 0;
}