#include <iostream>
using namespace std;

int main() // Enter specific input to escape.
{
    char *PTRstr;
    char ch;
    PTRstr = new char [100];
    
    cout << "Enter string with space : "; 
    cin.getline(PTRstr, 100); 

    cout.write(PTRstr,5); // print string of lenth 5
    cout.put(PTRstr[5]) << endl; // print character
    delete [] PTRstr;
    return 0;
}