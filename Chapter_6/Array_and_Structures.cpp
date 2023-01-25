#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[5][11];
    cout << "Enter 5 string" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << " string : ";
        cin >> str[i];
    }

    char *max = str[0];

    for (int i = 1; i < 5; i++)
    {
        if ((strcmp(max, str[i]) < 0))
        {
            max = str[i];
        }
    }

    cout << "The largest string is " << max << endl;
    return 0;
}