#include <iostream>
#include <string>
using namespace std;

char* compare(char array[][11]) // return pointer for array
{
    int max = 0;

    for (int i = 1; i < 5; i++)
    {
        if ((strcmp(array[max], array[i]) < 0)) // compare two string with strcmp in string
        {
            max = i;
        }
    }

    return array[max]; // return of the largest string 
}
int main()
{
    char str[5][11];
    cout << "Enter 5 string" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << " string : ";
        cin >> str[i];
    }

    cout << "The largest string is " << compare(str) << endl;
    return 0;
}