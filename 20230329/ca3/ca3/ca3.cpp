#include <iostream>

using namespace std;

int main()
{
    float a{}, b{};

    cout << "Type a number: ";
    cin >> a;
    cout << "\nType b number: ";
    cin >> b;

    //float c = a + b;
    //float c{ a + b };
    
    float c{};

    a + b; // Operation, Expression (return value)
    // Asingment
    c = a + b; // +(a,b)

    cout << "a + b = " << c;
}