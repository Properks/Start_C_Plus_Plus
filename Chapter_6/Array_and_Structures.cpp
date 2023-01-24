#include <iostream>
using namespace std;

int main()
{
    char Array[10] = "computer";
    char *str;
    str = Array;

    cout << str << endl; // ouput "computer" (adress)
    cout << *str << endl; // output "c" (valuable)
    return 0;
}