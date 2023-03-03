#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int Plus(int a, int b)
{    
    return a + b;
}

void Input(vector<int> &Arr)
{
    cout << "Enter 5 numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> Arr[i];
    }
}

void print(vector<int> &Arr)
{
    for (int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> Arr1(5), Arr2(5), Arr3(5);
    Input(Arr1);
    Input(Arr2);
    
    transform(Arr1.begin(), Arr1.end(), Arr2.begin(), Arr3.begin(), Plus);
    
    print(Arr1);
    print(Arr2);
    print(Arr3);
    
    return 0;
}