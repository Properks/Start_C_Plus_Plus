#include <iostream>
using namespace std;
template <class T> T Calculator(T n, T m, char C) // Template in order to calculate numbers
{
    switch (C)
    {
    case '*':
        return n*m;
    case '/':
        return n/m;
    case '+':
        return n+m;
    case '-':
        return n-m;
    }
    assert(false); // If it have error, print error
} //FIXME: Input template form. I don't know User input which form.
template <class Type> Type sum(Type n, Type m)
{
    return (n+m);
}
template <class Type> Type sum(Type *Array, int A)
{
    Type total = 0;
    for (int i = 0; i < A; i++)
    {
        total += *(Array + i);
    }
    return total;
}

int main()
{
    int A, B;
    int arr[10];
    cout << "Enter two numbers -> "; // Input two numbers
    cin >> A >> B;
    cout << "= " << sum(A,B) << endl;

    cout << "Enter two numbers -> "; // Input 10 numbers
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "= " << sum(arr,10) << endl;

    return 0;
}