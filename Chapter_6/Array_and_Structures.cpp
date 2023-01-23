#include <iostream>
using namespace std;

int Count() // count number with static valuable
{
    static int count = 0;
    ++count;
    return count;
}

void Enter_password(int &user)
{
    cout << "\nEnter your password (8 numbers) : ";
    cin >> user;
}

int main()
{
    int password = 20230123, user;
    for (int i = 0; i < 100; i++)
    {
        Enter_password(user);
        if (user == password)
        {
            cout << "Log-in Succeed" << endl;
            break;
        }
        else
        {
            cout << "Incorrect " << Count() << " times" << endl;
            continue;
        }
    }
    return 0;
}