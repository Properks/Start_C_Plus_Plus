#include <iostream>
#include <string>
using namespace std;

class Sum_numbers
{
private:
    int sum, count_of_numbers, *numbersPTR; // Declare sum of numbers variable, and int pointer in order to use like array.
public:
    Sum_numbers(int num) // Declare constructor for initializing variable and pointer.
    {
        sum = 0;
        count_of_numbers = num;
        numbersPTR = new int [count_of_numbers];
    }
    Sum_numbers(const Sum_numbers &V1) // Declare copy constructor for initializing variable and pointer.
    {
        sum = V1.sum;
        count_of_numbers = V1.count_of_numbers;
        numbersPTR = new int [count_of_numbers]; // allocated new heap memory for `delete` operator.
        for (int i = 0; i < count_of_numbers; i++)
        {
            *(numbersPTR+i) = V1.numbersPTR[i]; // copy only value.
        }
    }
    ~Sum_numbers()  // Destructor for deleting variable memory.
    {
        delete [] numbersPTR; // If you want to use `delete` in destructor, write `new` operator in constructor
    }
    void Get_numbers() // Input numbers and allocate memory.
    {
        int data; // Variable for input.
        cout << "Enter " << count_of_numbers << " numbers : ";
        for (int i = 0; i < count_of_numbers; i++)
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
        //return sum;  // Return int type for output() function. [Ln 56]
    }
    void output() // Output all numbers and result.
    {
        cout << "The sum of ";
        for (int i = 0; i < count_of_numbers - 1; i++)
        {
            cout << *(numbersPTR+i) << ", ";
        }
        cout << *(numbersPTR+count_of_numbers - 1) << " is " << sum << endl;
        // If you write function has return in output(cout or function for output), function is executed whenever output
    }
};

int main()
{
    int num;
    cout << "Enter how many numbers that you want to enter? : "; // Input count of numbers
    cin >> num;

    Sum_numbers test(num); // Call constructor.
    test.Get_numbers();
    test.Sum();

    Sum_numbers Delete_test(test); // Call copy constructor 
    Delete_test.output();

    return 0;
}