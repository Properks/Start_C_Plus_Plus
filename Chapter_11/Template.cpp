#include <iostream>
using namespace std;
template <typename Tp> class Sum
{
private:
    Tp value1, value2, sum;
    char Operator;
public:
    Sum()
    {
        value1 = 0; value2 = 0;
    }
    friend istream& operator >>(istream &is, Sum &Input)
    {
        is >> Input.value1 >> Input.Operator >> Input.value2;
        return is;
    }
    friend ostream& operator <<(ostream &os, Sum &Output)
    {
        os << Output.value1 << " " << Output.Operator << " " << Output.value2 << " = " << Output.sum;
        return os;
    }
    void Calculator()
    {
        switch (Operator)
        {
        case '*':
            sum = value1*value2;
            break;
        case '/':
            sum = value1/value2;
            break;
        case '+':
            sum = value1+value2;
            break;
        case '-':
            sum = value1-value2;
            break;
        }
    }
    
};

int main()
{
    Sum <double> DB;
    cout << "Enter a form will calculate -> "; // Input two numbers
    cin >> DB;
    DB.Calculator();
    cout << DB << endl;
    return 0;
}