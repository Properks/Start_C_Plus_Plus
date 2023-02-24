#include <iostream>
#include <fstream>
using namespace std;

template <class T> void Is_it_int(string question, T &value) // Check user input <class T> (int or double).
{
    while(true)
    {
        cout << question;
        cin >> value;
        if(cin.fail() == 1)
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "This isn't number" << endl;
        }
        else{break;}
    }
}

int main() // Record list and price that user will buy in file and output
{
    int Count;
    double Price;
    char *list;
    list = new char[100]; // Allocate heap memory.
    fstream List("File_Input_Output.txt", ios::trunc | ios::out); // Open file, reset contents and output mode.

    Is_it_int("Enter how many did you buy : ", Count);
    if (Count < 1)
    {
        cout << "You will not buy anything, Have a nice day" << endl;
    }
    else
    {
        for (int i = 0; i < Count; i++) // Input from user and save it in file.
        {
            cout << "Enter a name : ";
            cin >> list;
            List << list;
            List.width(15 - strlen(list)); // In order to keep in line.
            Is_it_int("Enter a price : ", Price);
            List << "$" << Price << endl;
        }
        
    }
    List.close(); // Close file.
    List.open("File_Input_Output.txt", ios::in); // input mode.
    for (int j = 0; j < Count; j++) // Output list.
    {
        List.getline(list, 100, '\n');
        cout << list << endl;
    }
    List.close();
    delete [] list; // Unallocate heap memory.
    return 0;
}