#include <iostream>
#include <string>
using namespace std;

int main()
{
    char *Input, ch;
    int num;
    Input = new char[100];
    cout << "Enter a sentence : ";
    cin.getline(Input, 100, '\n');

    cout << "Enter a spell that you want to find : ";
    cin >> ch;

    num = count(&Input[0], &Input[strlen(Input) + 1], ch); // Count how many is 'char' in array.
    cout << num << " numbers of " << ch << " is in this array!!" << endl;
    delete [] Input;
    return 0;
}