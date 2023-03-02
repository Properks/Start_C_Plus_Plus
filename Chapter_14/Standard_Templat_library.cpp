#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    vector<int> Arr(10);
    cout << "Enter 10 numbers : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> Arr[i];
    }
    sort(Arr.begin(), Arr.begin() + 10, greater<int>());
    
    for (int j = 0; j < 10; j++)
    {
        cout << Arr[j];
    }
    cout << endl;
    
    return 0;
}
/*
// About declaring vector
// Declare a vector of integers with no initial values
vector<int> myInts;

// Declare a vector of strings with initial values
vector<string> myStrings = {"apple", "banana", "orange"};

// Declare a vector of characters with initial values specified using iterators
char letters[] = {'a', 'b', 'c', 'd', 'e'};
vector<char> myChars(letters, letters+5);
*/