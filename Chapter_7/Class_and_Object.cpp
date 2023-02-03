#include <iostream>
#include <string>
using namespace std;

class Sum_numbers
{
private:
    int sum, count_of_numbers, *numbersPTR; // Declare sum of numbers variable, and int pointer in order to use like array.
public:
    Sum_numbers() // Constructor for caculate and initialize variable with member functions.
    {
        sum = 0;
    }
    ~Sum_numbers() {} // Destructor for deleting variable memory.
    void Get_numbers(int num) // Input numbers and allocate memory.
    {
        int data; // Variable for input.
        count_of_numbers = num;
        numbersPTR = new int [num];
        cout << "Enter " << num << " numbers : ";
        for (int i = 0; i < num; i++)
        {
            cin >> data;
            *(numbersPTR+i) = data;
        }
    }
    void Sum()
    {
        for (int i = 0; i < count_of_numbers; i++) // Sum all numbers with loop statement.
        {
            sum += *(numbersPTR+i);
        }
        //return sum;  // Return int type for output() function. [Ln 55]
    }
    void output() // Output all numbers and result.
    {
        cout << "The sum of ";
        for (int i = 0; i < count_of_numbers - 1; i++)
        {
            cout << *(numbersPTR+i) << ", ";
        }
        cout << *(numbersPTR+count_of_numbers - 1) << " is " << sum << endl;
        delete [] numbersPTR; // In order not to create memory leak
        // If you write function has return in output(cout or function for output), function is executed whenever output
    }
};

int main()
{
    int num;
    cout << "Enter how many numbers that you want to enter? : "; // Input count of numbers
    cin >> num;
    Sum_numbers test[2]; // Declare constructor array.
    test[0].Get_numbers(num);
    test[0].Sum();
    test[1] = test[0];
    test[1].output();
    return 0;
}