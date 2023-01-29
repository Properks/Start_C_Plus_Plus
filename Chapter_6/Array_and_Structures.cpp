#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Row, Col, num1 = 65;
    char **Array;

    cout << "Enter a Row : ";
    cin >> Row;
    cout << "Enter a Column : ";
    cin >> Col;

    Array = new char *[Row]; // Create row, column memory
    for (int i = 0; i < Row; i++)
    {
        Array[i] = new char(Col);
    }

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Array[i][j] = num1;
            num1++;
            if (num1 == 91)
            {
                num1 = 97;
            }
            if (num1 > 122)
            {
                num1 = 65;
            }
        }
        
    }
    for (int i = 0; i < Row; i++) // output multi-dimensional Array
    {
        for (int j = 0; j < Col; j++)
        {
            cout << Array[i][j];

        }
        cout << endl;
    }

    for (int i = 0; i < Row; i++) // delete column memory
    {
        delete [] Array[i];
    }
    delete [] Array; // delete row memory
    
    
    return 0;
}