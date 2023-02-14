#include<iostream>
#include<string>
using namespace std;

class Sum_String
{
private:
    char *StrArr;
    int len;
public:
    Sum_String(); // Constructor.
    ~Sum_String();
    Sum_String operator +(const Sum_String &A); // Combine two strings '+'.
    Sum_String& operator +=(const Sum_String &A); // Combine two strings '+='.
    friend istream& operator >> (istream &is, Sum_String &object) // Input string.
    {
        char temp[512];
        is.getline(temp, 512);
        object.len = strlen(temp);
        object.StrArr = new char [object.len + 1];
        strcpy(object.StrArr, temp);
        return is;
    }
    friend ostream& operator << (ostream &os, Sum_String &object) // print string.
    {
        os << object.StrArr;
        return os;
    }
    // Added operator `new` and `delete`
    void* operator new (size_t size)
    {
        void* MkMemory = ::operator new(size);
        return MkMemory;
    }
    void operator delete (void* Delmemory)
    {
        ::operator delete (Delmemory);
    }
};

Sum_String::Sum_String() // Initialize memeber variable.
{
    StrArr = NULL;
    len = 0;
}
Sum_String::~Sum_String() // Deallocate memory.
{
    delete [] StrArr;
}
Sum_String Sum_String::operator +(const Sum_String &A) // Add two strings and save other object.
{
    Sum_String Added;
    Added.len = strlen(this -> StrArr) + strlen(A.StrArr);
    Added.StrArr = new char [Added.len + 1];
    strcpy(Added.StrArr, this -> StrArr); // copy Added.StrArr.
    strcat(Added.StrArr, A.StrArr); // Added A.StrArr.
    return Added;
}
Sum_String& Sum_String::operator +=(const Sum_String &A) // Combine two strings '+='
{
    char temp[512]; // For save 'this -> object.StrArr' to temp. because of [Ln 54].
    strcpy(temp, this -> StrArr);
    this -> len += A.len;
    this -> StrArr = new char [this -> len + 1]; // Reallocate memory for combining.
    strcpy(this -> StrArr, temp);
    strcat(this -> StrArr, A.StrArr);
    return *this;
}
int main()
{
    Sum_String First_string;
    cout << "Enter First string : "; // Input first string and save in First_string object
    cin >> First_string;

    Sum_String Second_string;
    cout << "Enter Second string : "; // Input second string and save in Second_string object
    cin >> Second_string;

    Sum_String Third_string;
    cout << "Enter Third string : "; // Input second string and save in Third_string object
    cin >> Third_string;

    Second_string += Third_string; // Using '+=' operator overloading
    Sum_String Combined_string = First_string + Second_string;
    cout << Combined_string << endl;
    return 0;
}