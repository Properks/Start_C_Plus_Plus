#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Score
{
    char name[16];
    long Student_ID;
    int Korea;
    int Math;
    int English;
};

struct Score Array[2];

void input()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter student's name : ";
        cin >> Array[i].name;
        cout << "Enter student's ID : ";
        cin >> Array[i].Student_ID;
        cout << "Enter student's Korea score : ";
        cin >> Array[i].Korea;
        cout << "Enter student's Math score : ";
        cin >> Array[i].Math;
        cout << "Enter student's English score : ";
        cin >> Array[i].English;
    }
    // cout << "Enter student's name : ";
    // cin >> Array[0].name;
    // cout << "Enter student's ID : ";
    // cin >> Array[0].Student_ID;
    // cout << "Enter student's Korea score : ";
    // cin >> Array[0].Korea;
    // cout << "Enter student's Math score : ";
    // cin >> Array[0].Math;
    // cout << "Enter student's English score : ";
    // cin >> Array[0].English;

    // cout << "Enter student's name : ";
    // cin >> Array[1].name;
    // cout << "Enter student's ID : ";
    // cin >> Array[1].Student_ID;
    // cout << "Enter student's Korea score : ";
    // cin >> Array[1].Korea;
    // cout << "Enter student's Math score : ";
    // cin >> Array[1].Math;
    // cout << "Enter student's English score : ";
    // cin >> Array[1].English;
}

int main()
{
    input();

    cout << "------------------------------------" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << Array[i].name << "(" << Array[i].Student_ID << ") : " << 
        Array[i].Korea <<","<< Array[i].Math <<","<< Array[i].English << endl 
        << "Average score : " << (Array[i].Korea + Array[i].Math + Array[i].English)/3 << endl;
    }
    // cout << Array[0].name << "(" << Array[0].Student_ID << ") : " << 
    // Array[0].Korea <<","<< Array[0].Math <<","<< Array[0].English << endl 
    // << "Average score : " << (Array[0].Korea + Array[0].Math + Array[0].English)/3 << endl;
    
    // cout << Array[1].name << "(" << Array[1].Student_ID << ") : " << 
    // Array[1].Korea <<","<< Array[1].Math <<","<< Array[1].English << endl 
    // << "Average score : " << (Array[1].Korea + Array[1].Math + Array[1].English)/3 << endl;
    return 0;
}