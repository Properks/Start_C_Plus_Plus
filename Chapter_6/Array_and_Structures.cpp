#include <iostream>
using namespace std;

void Filling_Alphabet(char **array, int Row, int Col)
{
    int num1 = 65; // =='A'
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            array[i][j] = num1;
            num1++;
            if (num1 == 91) // == '[' == 'z' + 1
            {
                num1 = 97; // == 'a'
            }
            if (num1 > 122) //  == 'z'
            {
                num1 = 65;
            }
        }
        
    }
}

int main()
{
    int Row, Col;
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

    Filling_Alphabet(Array, Row, Col); // Have to input char **array form. So, I inputed Address of row array
    // If I want to input column array to function, I'll change char *array form 

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