#include <iostream>
#include <string>
using namespace std;

int main()
{
    char String[1024], *Memory; // Declare array and pointer

    cout << "Enter a sentence : ";
    cin.getline(String,1024); // input sentence

    Memory = new char(strlen(String) + 1); // create new memory
    strcpy(Memory, String);

    cout << "\"" << Memory << "\" consists of " << strlen(Memory) << " letters" << endl;
    delete [] Memory; // delete new memory
    return 0;
}