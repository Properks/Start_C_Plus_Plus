#include<iostream>
#include<string>
using namespace std;

class Sum_String
{
private:
    char *StrArr;
    int len;
public:
    Sum_String(); // For operator +
    Sum_String(const char *str); // initialize string
    ~Sum_String();
    Sum_String operator +(const Sum_String &A); // Combine two strings '+'
    Sum_String& operator +=(const Sum_String &A); // Combine two strings '+='
    friend ostream& operator << (ostream &os, Sum_String &object) // print string
    {
        os << object.StrArr;
        return os;
    }
};
Sum_String::Sum_String()
{
    StrArr = NULL;
    len = 0;
}
Sum_String::Sum_String(const char *str)
{
    len = strlen(str);
    StrArr = new char [len + 1];
    strcpy(StrArr, str);
}
Sum_String::~Sum_String()
{
    delete [] StrArr;
}
Sum_String Sum_String::operator +(const Sum_String &A) // Combine two strings '+'
{
    Sum_String Added;
    Added.len = strlen(this -> StrArr) + strlen(A.StrArr);
    Added.StrArr = new char [Added.len + 1];
    strcpy(Added.StrArr, this -> StrArr); // copy Added.StrArr
    strcat(Added.StrArr, A.StrArr); // Added A.StrArr
    return Added;
}
Sum_String& Sum_String::operator +=(const Sum_String &A)
{
    char temp[512];
    strcpy(temp, this -> StrArr);
    this -> len += A.len;
    this -> StrArr = new char [this -> len + 1];
    strcpy(this -> StrArr, temp);
    strcat(this -> StrArr, A.StrArr);
    return *this;
}
int main()
{
    char STRARR[512];

    cout << "Enter first string : "; // Input first string and save in First_string object
    cin.getline(STRARR, 512);
    Sum_String First_string(STRARR);

    cout << "Enter second string : "; // Input second string and save in Second_string object
    cin.getline(STRARR, 512);
    Sum_String Second_string(STRARR);

    First_string += Second_string; // Using '+' operator overloading
    cout << First_string << endl;
    return 0;
}