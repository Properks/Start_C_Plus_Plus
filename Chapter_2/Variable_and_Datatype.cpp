#include <iostream>
#include <bitset> // For output binary form

using namespace std;

int main()
{
    const double j = 00000011; // not Binary, This is Octal ex) 00000011 = 9
    cout << "number is " << j << endl;
    cout << "number is " << bitset<4>(j) << endl; // output binary form with 4 size

    bool a; // bool is true or fulse 
    a = 100;
    cout << "That is " << a << endl; // Result is 1 not true
    
    char Ch1 = 'A', Ch2 = 'a';
    cout << oct << Ch1 + 1 << endl;
    cout << oct << Ch2 + 1 << endl;
    cout << "A - a -> " << Ch2 - Ch1 << endl;
}