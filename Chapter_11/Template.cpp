#include <iostream>
using namespace std;
template <class T> void Swap(T &n, T &m) // Template swap Two numbers
{
    T temp = n;
    n = m;
    m = temp;
}

int main()
{
    int A, B;
    double D1, D2;
    cout << "Enter Two numbers(int) : ";
    cin >> A >> B;

    Swap(A,B); // Swap two int form numbers with tamplate
    cout << A << ", " << B << endl;

    cout << "Enter Two numbers(double) : ";
    cin >> D1 >> D2;
    Swap(D1,D2); // Swap two double form numbers with template
    cout << D1 << ", " << D2 << endl;

    return 0;
}