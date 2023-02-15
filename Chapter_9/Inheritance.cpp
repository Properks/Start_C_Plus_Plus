#include <iostream>
using namespace std;
class base
{
private:
    int value1, value2;
public:
    int Sum_two_values();
    friend istream& operator >> (istream &is, base &ob)
    {
        is >> ob.value1 >> ob.value2;
        return is;
    }
};

int base::Sum_two_values()
{
    return value1 + value2;
}

class Derived : public base
{
private:
    int k;
public:
    Derived(int i) {k = i;}
    ~Derived() {}
    int Multiply()
    {
        return Sum_two_values() * k;
    }
};

int main()
{
    int num1, num2;
    Derived ob(3);

    cout << "Enter two numbers : ";
    cin >> ob;
    cout << ob.Multiply() << endl;
    return 0;
}