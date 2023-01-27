#include <iostream>
#include <string>
using namespace std;

char* Sum_Two_arrays(char Array1[10], char Array2[10])
{
    static char Plus_Str[22];
    int len_of_array1 = strlen(Array1);
    int len_of_array2 = strlen(Array2);

    strcpy(Plus_Str, Array1);
    Plus_Str[len_of_array1] = ' ';
    for (int i = 0; i < len_of_array2; i++)
    {
        Plus_Str[len_of_array1 + i + 1] = Array2[i];
    }

    return Plus_Str;
}
int main()
{
    int num1 = 4;
    int *Pt_num1;
    int int_array[3] = {1,2,3};
    
    Pt_num1 = &num1; // int *Pt_num1 = &num1;
    cout << *Pt_num1 << endl; // 4
    cout << Pt_num1 << endl; // Address of num1

    Pt_num1 = int_array;
    cout << Pt_num1 << endl; // Address of int_array
    cout << *Pt_num1 << endl << endl; // 1

//----------------------------------------------------------

    char array1[10], array2[10];
    char *str1 = array1;

    cin >> str1; // == cin >> array1;
    cout << str1 << endl; // == cout << array1 << endl;

    cin >> array2;
    cout << array2 << endl << endl;

    cout << Sum_Two_arrays(array1, array2) << endl; // input Pointer form in function

    return 0;
}