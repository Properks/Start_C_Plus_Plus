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
}value1, value2;

void input()
{
    cout << "Enter student's name : ";
    cin >> value1.name;
    cout << "Enter student's ID : ";
    cin >> value1.Student_ID;
    cout << "Enter student's Korea score : ";
    cin >> value1.Korea;
    cout << "Enter student's Math score : ";
    cin >> value1.Math;
    cout << "Enter student's English score : ";
    cin >> value1.English;

    cout << "Enter student's name : ";
    cin >> value2.name;
    cout << "Enter student's ID : ";
    cin >> value2.Student_ID;
    cout << "Enter student's Korea score : ";
    cin >> value2.Korea;
    cout << "Enter student's Math score : ";
    cin >> value2.Math;
    cout << "Enter student's English score : ";
    cin >> value2.English;
}

int main()
{
    input();

    cout << "------------------------------------" << endl;
    
    cout << value1.name << "(" << value1.Student_ID << ") : " << 
    value1.Korea <<","<< value1.Math <<","<< value1.English << endl 
    << "Average score : " << (value1.Korea + value1.Math + value1.English)/3 << endl;
    
    cout << value2.name << "(" << value2.Student_ID << ") : " << 
    value2.Korea <<","<< value2.Math <<","<< value2.English << endl 
    << "Average score : " << (value2.Korea + value2.Math + value2.English)/3 << endl;
    return 0;
}