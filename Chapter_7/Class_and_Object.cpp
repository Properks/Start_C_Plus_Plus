#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    double Pi;
public:
    double lenth(double radius)
    {
        Pi = 3.14;
        return 2 * radius * Pi;
    }
    double square(double radius)
    {
        Pi = 3.14;
        return pow(radius, 2) * Pi;
    }
}fomula;

int main()
{
    double radius;
    cout << "Enter a radius : ";
    cin >> radius;

    cout << "Lenth of circle have " << radius << " radius is "<< fomula.lenth(radius) << endl;
    cout << "Square of circle have " << radius << " radius is "<< fomula.square(radius) << endl;

    return 0;
}