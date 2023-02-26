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
    char *list, ch_for_print;
    list = new char[100]; // Allocate heap memory.

    fstream List;
    Is_it_int("Which do you rewrite this file or add list? (1 : Rewrite, 2 : Add): ", Count);
    if(Count == 1)
    {
        List.open("File_Input_Output.txt", ios::trunc | ios::out); // Open file, reset contents and output mode.
    }
    else
    {
        if(Count == 2)
        {
            List.open("File_Input_Output.txt", ios::app | ios::out); // Open file, add contents and output mode.
        }
        else
        {
            cout << "You enter " << Count << "!! (non 1 or 2) Exit program" << endl;
            return 0;
        }
    }

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
    while (List.get(ch_for_print)) // Print list
        cout << ch_for_print;
    List.close();
    delete [] list; // Unallocate heap memory.
    return 0;
}