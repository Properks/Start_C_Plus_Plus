#include <iostream>
#include <fstream>
using namespace std;

int main() // Enter specific input to escape.
{
    char ch, Sentence[80], Word[10];
    ifstream Input;
    Input.open("File_Input_Output.txt"); // == ifstream Input("File_Input_Output.txt");

    Input.getline(Sentence, 80, '\n'); // A sentence
    Input >> Word; // A word
    Input >> ch; // A alphabet
    cout << Sentence << ", "<< endl
     << Word << ", " << ch << endl;
    Input.close();
    return 0;
}