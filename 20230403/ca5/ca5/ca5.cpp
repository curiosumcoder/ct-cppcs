#include <iostream>
#include <format>

//#define PI 3.14159265358979323846264338328
//const double PI{ 3.14159265358979323846264338328 };
constexpr double PI{ 3.14159265358979323846264338328 };

#define MULTIME(a) a * a

constexpr double MultiMe(double n)
{
    double result{};

    result = n * n;

    return result;
}

using namespace std;

int main()
{
    //PI = 123; // No se puede

    double radius{}, area{};

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    //area = PI * radius * radius;
    //area = PI * MULTIME(radius);
    area = PI * MultiMe(radius);

    cout << format("The area of the circle is: {:.2f}\n", area);

    double prueba{ MultiMe(2) };

    cout << "READY!\n";
}