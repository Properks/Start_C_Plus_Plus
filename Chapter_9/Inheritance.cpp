#include <iostream>
using namespace std;
class base
{
private:
    int value1, value2;
public:
    void set_value(int i, int j);
    int Sum_two_values();
};

void base::set_value(int i, int j)
{
    value1 = i;
    value2 = j;
}
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
    cin >> num1 >> num2;
    ob.set_value(num1, num2);
    cout << ob.Multiply() << endl;
    return 0;
}