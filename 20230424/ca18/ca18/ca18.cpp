#include <iostream>
#include <string>

using namespace std;


// Modificadores de alcance
struct FullName {
    // Por defecto todo es public
private:

public:
    string FirstName;
    string LastName;
};

class FullNameC {
    // Por defecto todo es private
private:

public:
    string FirstName;
    string LastName;
};

int main()
{
    FullName f1{};
    f1.FirstName = "Juan";
    f1.LastName = "Perez";

    FullNameC f2;
    f2.FirstName = "Juan";
    f2.LastName = "Perez";

    cout << "READY!\n";
}