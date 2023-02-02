#include <iostream>
#include <string>
using namespace std;

class Sum_numbers
{
private:
    int sum, *numbersPTR; // Declare sum of numbers valuable, and int pointer in order to use like array.
    int count_of_numbers; // Count of numbers value.
public:
    Sum_numbers(int value1) // Constructor for caculate and initialize valuable with member functions.
    {
        sum = 0;
        Get_numbers(value1);
        output();
    }
    ~Sum_numbers() // Destructor for deleting int pointer memory.
    {
        delete [] numbersPTR;
    }
    void Get_numbers(int num) // Input numbers and allocate memory.
    {
        int data; // Valuable for input.
        count_of_numbers = num;
        numbersPTR = new int [num];
        cout << "Enter " << num << " numbers : ";
        for (int i = 0; i < num; i++)
        {
            cin >> data;
            *(numbersPTR+i) = data;
        }
    }
    int Sum()
    {
        for (int i = 0; i < count_of_numbers; i++) // Sum all numbers with loop statement.
        {
            sum += *(numbersPTR+i);
        }
        return sum;  // Return int type for output() function.
    }
    void output() // Output all numbers and result.
    {
        cout << "The sum of ";
        for (int i = 0; i < count_of_numbers - 1; i++)
        {
            cout << *(numbersPTR+i) << ", ";
        }
        cout << *(numbersPTR+count_of_numbers - 1) << " is " << Sum() << endl;
    }
};

int main()
{
    int num;
    cout << "Enter how many numbers that you want to enter? : "; // Input count of numbers
    cin >> num;
    Sum_numbers test(num); // Declare constructor.
    return 0;
}