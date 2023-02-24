#include <iostream>
#include <fstream>
using namespace std;

int main() // Enter specific input to escape.
{
    ofstream Output;
    Output.open("File_Input_Output.txt"); // == ofstream Output("File_Input_Output.txt");

    Output << "Enjoy your coding";
    cout << "Make a file!!" << endl;
    Output.close();
    return 0;
}