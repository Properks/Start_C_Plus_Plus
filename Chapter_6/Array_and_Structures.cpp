#include <iostream>
using namespace std;

int Compare(int *Array)
{
    int largest = 0;
    for (int i = 0; i < 10; i++)
    {
        if (largest < *(Array + i))
        {
            largest = *(Array + i);
        }
    }
    return largest;
}

int main()
{
    int Array[10];
    cout << "Enter 10 numbers : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> Array[i];
    }
    cout << "The largest number is " << Compare(Array) << endl;
    return 0;
}