#include <iostream>
#include <bitset> // For output binary form

using namespace std;

int main()
{
    const double j = 00000011; // not Binary, This is Octal ex) 00000011 = 9
    cout << "number is " << j << endl;
    cout << "number is " << bitset<4>(j) << endl; // output binary form with 4 size
}