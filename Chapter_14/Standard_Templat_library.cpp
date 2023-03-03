#include <iostream>
#include <list> // more ccomfortable to move, insert and delete value than vector
using namespace std;
template<class T>void Is_it_number(string str, T &num) // T : int or double
{
    while(true)
    {
        cout << str;
        cin >> num;
        if(cin.fail() == 1)
        {
            cin.clear();
            cin.ignore(100, '\n');

            cout << " This isn't number ";
        }
        else
        {
            break;
        }
    }
}

void print(list<string> Arr, list<string>::iterator it)
{
    int i = 1;
    cout << "Inputed data : " << endl;
    for (it = Arr.begin(); it != Arr.end(); it++) // Print with iterator in list
    {
        cout <<"\"" << i << "\" : " << *it << endl;
        i++;
    }
    cout << endl;
}

void Del_value(list<string> &Arr, list<string>::iterator it) // Add '&' in front of Arr Because Student must be changed
{
    int num;
    Is_it_number("What did you want delete? Enter a number : ", num);
    it = Arr.begin();
    for (int i = 0; i < num - 1; i++) // For location
    {
        it++;
    }
    Arr.erase(it);
}

void Insert_value(list<string> &Arr, list<string>::iterator it) // Add '&' in front of Arr Because Student must be changed
{
    int Location;
    string ch;
    Is_it_number("Where did you want to Insert? Enter a number : ", Location);
    it = Arr.begin();
    for (int i = 0; i < Location - 1; i++)
    {
        it++;
    }
    cout << "Enter a string : ";
    cin >> ch;
    Arr.insert(it, ch);
}

int main()
{
    list<string> Student;
    list<string>::iterator it;
    string ch;
    int select;

    cout << "Enter students' name (exit : !): ";
    while (cin >> ch) // Input 'ch' in list
    {
        if (ch == "!"){break;}
        Student.push_back(ch);
    }
    print(Student, it);

    while(true) // Change list with erasing, inserting.
    {
        Is_it_number("What did you want? (1 : Erase, 2 : Insert, 3. Nothing) : ", select);
        if (select == 1)
        {
            Del_value(Student, it);
            print(Student, it);
        }
        else
        {
            if (select == 2)
            {
                Insert_value(Student, it);
                print(Student, it);
            }
            else
            {
                if (select == 3)
                {
                    cout << "Exit program!!" << endl;
                    break;
                }
                else
                {
                    cout << "Please enter a number among 1, 2, 3" << endl;
                }
            }
        }
    }
    return 0;
}