#include <iostream>
#define output(value) cout << "value = " << value << endl; // output function
using namespace std;
int value = 10; // Declare global value

void Another_local_valuable() // For local valuable in other function
{
    int value = 40;
    output(value);
}

int main()
{
    output(value); // output global valuable : ln 4
    int value = 30;

    {int value = 20; output(value);} // output local valuable : ln 17

    output(value); // output local valuable : ln 15
    Another_local_valuable(); // output local valuable : 8
    return 0;
}