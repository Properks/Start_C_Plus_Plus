#include <iostream>
#include <string>
using namespace std;

class Sum_5_numbers
{
private:
    int sum, *numbersPTR;
    int number_of_numbers;
public:
    void Get_numbers(int num)
    {
        int data;
        number_of_numbers = num;
        numbersPTR = new int [num];
        cout << "Enter " << num << " numbers : ";
        for (int i = 0; i < num; i++)
        {
            cin >> data;
            *(numbersPTR+i) = data;
        }
    }
    int Sum_numbers()
    {
        sum = 0;
        for (int i = 0; i < number_of_numbers; i++)
        {
            sum += *(numbersPTR+i);
        }
        return sum;
    }
    void output()
    {
        cout << "The sum of ";
        for (int i = 0; i < number_of_numbers - 1; i++)
        {
            cout << *(numbersPTR+i) << ", ";
        }
        cout << *(numbersPTR+number_of_numbers - 1) << " is " << Sum_numbers() << endl;
        delete [] numbersPTR;
    }
};

int main()
{
    int num;
    cout << "Enter how many numbers that you want to enter? : ";
    cin >> num;
    Sum_5_numbers test, *TestPTR;
    TestPTR = &test;
    test.Get_numbers(num);
    TestPTR -> output();
    return 0;
}