#include <iostream>
#include <iomanip> // For show 6 number behind decimal point
#include <bitset> // For output binary form

using namespace std;

int main()
{
    const double j = 00000011; // not Binary, This is Octal ex) 00000011 = 9
    cout << "number is " << j << endl;
    cout << "number is " << bitset<4>(j) << endl; // output binary form with 4 size

    int vvi;
    float vvf;
    double vvd;
    vvi = vvf = vvd = 12.3456789;
    cout << setiosflags(ios::fixed); // if you don't write this, output 6 numbers that combine exponent and behind the decimal point
    cout << "vvi = " << vvi << endl;
    cout << "vvf = " << vvf << endl;
    cout << "vvd = " << setprecision(10) << vvd << endl; // setprecision(10) is show 10 number behind decimal point in double type

    bool a; // bool is true or fulse 
    a = 100;
    cout << "That is " << a << endl; // Result is 1 not true
    
    char Ch1 = 'A', Ch2 = 'a';
    cout << oct << Ch1 + 1 << endl;
    cout << oct << Ch2 + 1 << endl;
    cout << "A - a -> " << Ch2 - Ch1 << endl;
}