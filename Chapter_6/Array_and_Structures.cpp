#include <iostream>
#include <string>
using namespace std;

int Find_count_of_character(char array[1024], char character) // Array and character were inputed
{
    int count = 0;
    char *Save_string = array; // Declare pointer with string inputed
    while (strchr(Save_string,character) != NULL) // If string doesn't have chracter, it will break
    {
        Save_string = strchr(Save_string, character); // Find character in string
        Save_string = strchr(Save_string, *(Save_string+1)); // Remove first character in string in order not to do infinite loop
        count++;
    }
    return count;
}

int main()
{
    char String[1024], Find_character;

    cout << "Enter a sentence in English (len = 1024) : ";
    cin.getline(String,1024); // input with cin.getline in order to include space bar
    cout << "Enter a character that you want to find : ";
    cin >> Find_character;

    cout << "Count of " << Find_character << " in \"" << String <<  "\" is " 
    << Find_count_of_character(String, Find_character) << endl;
    
    return 0;
}