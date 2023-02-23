#include <iostream>
using namespace std;

int main() // Enter specific input to escape.
{
    int Width;
    cout << " Enter width : ";
    cin >> Width;
    for (int i = 1; i < Width + 1; i++)
    {
        cout.width(Width - (i-1)); // Set width
        cout.fill('0'); // Fill character as much as width. If width is 5, print 4 character and cursor on 5th.
        for (int j = 0; j < i; j++)
        {
            cout << 8;
        }
        cout << endl;
    }
    return 0;
}