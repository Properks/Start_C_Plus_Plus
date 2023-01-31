#include <iostream>
#include <string>
using namespace std;

class Privacy_Data
{
private:  // Declare class valuable
    int age;
    char *name;
    char *ID;
    char *Password;
public:
    void Person_name(char *string) // Save inputed string in name
    {
        int len = strlen(string) + 1;
        name = new char [len];
        strcpy(name, string);
    }
    void Person_ID(char *string) // Save inputed string in ID
    {
        int len = strlen(string) + 1;
        ID = new char [len];
        strcpy(ID, string);
    }
    void Person_Password(char *string) // Save inputed string in Password
    {
        int len = strlen(string) + 1;
        Password = new char [len];
        strcpy(Password, string);
    }
    void Person_age(int Age) // Save inputed number in name
    {
        age = Age;
    }
    void output() // output Data
    {
        cout << name << endl;
        cout << ID << endl;
        cout << Password << endl;
        // delete [] name;      If you write like this and this project is bigger than now,
        // delete [] ID;        No data in (Man1).name, (Man1).ID, (Man1).Password
        // delete [] Password;
    }
}input, Man1, Man2, Man3;

int main()
{
    char String[1024]; // I will input string into only this array
    int age;

    cout << "Enter your age : ";
    cin >> age;
    if (age < 14) // If age is under 14, Can't continue
    {
        cout << "Sorry, You can't sign up, because your age is under 14" << endl;
        return 0; // escape main function
    }
    input.Person_age(age);
    cout << "Enter your name : ";
    cin >> String;
    input.Person_name(String);
       
    cout << "Enter your ID : ";
    cin >> String;
    input.Person_ID(String);

    cout << "Enter your Password : ";
    cin >> String;
    input.Person_Password(String);

    Man1 = input; // Copy class valuable(input) to Man1
    // Man1.output();

    return 0;
}