#include <iostream>
#include <list> // more ccomfortable to move, insert and delete value than vector
using namespace std;

void print(list<string> Arr, list<string>::iterator it)
{
    int i = 1;
    cout << "Inputed data : " << endl;
    for (it = Arr.begin(); it != Arr.end(); it++)
    {
        cout <<"\"" << i << "\" : " << *it << endl;
        i++;
    }
    cout << endl;
}

int main()
{
    list<string> Student;
    list<string>::iterator it;
    string ch;
    int select;

    cout << "Enter students' name (exit : !): ";
    while (cin >> ch)
    {
        if (ch == "!"){break;}
        Student.push_back(ch);
    }
    print(Student, it);

    return 0;
}