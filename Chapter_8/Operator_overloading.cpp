#include<iostream>
using namespace std;

class Sum_another_object
{
private:
    int x;
public:
    Sum_another_object();
    Sum_another_object(int value1);
    ~Sum_another_object() {}
    int operator + (const Sum_another_object &A)
    {
        int sum = x + A.x;
        return sum;
    }
};

Sum_another_object::Sum_another_object()
{
    x = 0;
}

Sum_another_object::Sum_another_object(int value1)
{
    x = value1;
}

int main()
{
    int sum;
    Sum_another_object A1(3);
    Sum_another_object A2(7);

    sum = A1 + A2;
    cout << "Sum is : " << sum << endl;
    return 0;
}