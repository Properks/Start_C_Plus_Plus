#include <iostream>
#include <string>
using namespace std;

class Sum_5_numbers
{
private:
    int sum;
    int numbers[5];
public:
    void Get_numbers()
    {
        int data;
        cout << "Enter 5 numbers : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> data;
            numbers[i] = data;
        }
    }
    int Sum_numbers()
    {
        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += numbers[i];
        }
        return sum;
    }
    void output()
    {
        cout << "The sum of ";
        for (int i = 0; i < 4; i++)
        {
            cout << numbers[i] << ", ";
        }
        cout << numbers[4] << " is " << Sum_numbers() << endl;
    }
};

int main()
{
    Sum_5_numbers test;
    test.Get_numbers();
    test.output();
    return 0;
}