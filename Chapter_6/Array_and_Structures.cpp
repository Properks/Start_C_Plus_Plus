#include <iostream>
#include <string>
using namespace std;

struct Data // Declare nested structure
{
    char name[16];
    long Student_ID;
    struct Score
    {
        int Korea;
        int Math;
        int English;
    }score;
};
void input(struct Data *d) // Inputed with structure pointer
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter student's name : ";
        cin >> (d+i) -> name;   // (Address form of pointer) -> valuable in structure
        cout << "Enter student's ID : ";
        cin >> (d+i) -> Student_ID;
        cout << "Enter student's Korea score : ";
        cin >> (d+i) -> score.Korea;
        cout << "Enter student's Math score : ";
        cin >> (d+i) -> score.Math;
        cout << "Enter student's English score : ";
        cin >> (d+i) -> score.English;
    }
}

int main()
{
    struct Data Array[2]; // Two student
    input(Array); // Input address of Array[2]

    cout << "------------------------------------" << endl;

    for (int i = 0; i < 2; i++) // output
    {
        cout << Array[i].name << "(" << Array[i].Student_ID << ") : " << 
        Array[i].score.Korea <<","<< Array[i].score.Math <<","<< Array[i].score.English << endl 
        << "Average score : " << (Array[i].score.Korea + Array[i].score.Math + Array[i].score.English)/3 << endl;
    }
    return 0;
}