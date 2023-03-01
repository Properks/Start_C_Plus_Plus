#include <iostream>
#include <string>
#include <vector> // TODO: What is this
using namespace std;

int main()
{
    string ch;
    string Str[] = {"Amy", "John", "Brian" ,"Jenny", "Tom"}; // 
    vector<string> Newstr(&Str[0], &Str[5]); // TODO: Why did it use like this
    vector<string>::iterator it; // TODO: What is this

    cout << "Enter a string that you want to find : ";
    cin >> ch;
    it = find(Newstr.begin(), Newstr.end(), ch); // TODO: Why did it use like this
    if(it == Newstr.end())
    {
        cout << ch << " isn't in this array..." << endl;
    }
    else
    {
        cout << ch << " is in this array!!" << endl;
    }
    return 0;
}