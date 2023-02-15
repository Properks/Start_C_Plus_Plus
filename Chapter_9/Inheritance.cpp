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

class Derived : private base
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
    void input()
    {
        cin >> *this;
    }
};

int main()
{
    int num1, num2;
    Derived ob(3);

    cout << "Enter two numbers : ";
    ob.input();
    cout << ob.Multiply() << endl;
    return 0;
}