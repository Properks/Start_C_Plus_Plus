#include <iostream>
#include <map> // set key and value.
using namespace std;

void print(map <string, int> m, map <string, int>::iterator it)
{
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << endl;
    }
}

int main()
{
    int count, ID;
    string name;
    map <string, int> Student_ID;
    map <string, int>::iterator it;
    
    cout << "How many student did you enter? : ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Enter a name : ";
        cin >> name;
        cout << "Enter a " << name << "'s ID : ";
        cin >> ID;
        Student_ID[name] = ID;
    }
    cout << endl;
    print(Student_ID, it);

    while(true)
    {
        cout << "Enter a name of person that you want to know Student-ID (exit : Enter a '!'): ";
        cin >> name;
        if (name == "!")
        {
            cout << "Thank you" << endl;
            break;
        }
        else
        {
            it = Student_ID.begin();
            while(true)
            {
                if (it->first == name)
                {
                    cout << name << "'s student-ID : " << it -> second << endl;
                    break;
                }
                else
                {
                    if (it == Student_ID.end())
                    {
                        cout << "This name isn' in a list" << endl;
                        break;
                    }
                }
                it++;
            }
            
        }
    }
    
    
    return 0;
}