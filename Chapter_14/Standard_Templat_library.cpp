#include <iostream>
#include <string>
#include <vector> //It is container.
using namespace std;

int main()
{
    string ch;
    string Str[] = {"Amy", "John", "Brian" ,"Jenny", "Tom"};
    vector<string> Newstr(&Str[0], &Str[5]); // Decalre variable with vector container.
    vector<string>::iterator it; // Declare iterator. iterator is like pointer in vector container.

    cout << "Enter a string that you want to find : ";
    cin >> ch;
    it = find(Newstr.begin(), Newstr.end(), ch); // Use iterator(.begin(), .end()) in order to find char.
    if(it == Newstr.end())
    {
        cout << ch << " isn't in this array..." << endl;
    }
    else
    {
        cout << ch << " is in this array!!" << endl;
    }
    return 0;
}