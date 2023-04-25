#include <iostream>
#include <string>
#include <format>
#include "CalendarPeriod.h"

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

using namespace CPPCompany::Billing;

int main()
{
    FullName f1{};
    f1.FirstName = "Juan";
    f1.LastName = "Perez";

    FullNameC f2;
    f2.FirstName = "Juan";
    f2.LastName = "Perez";

    //CalendarPeriod p;
    CalendarPeriod p{2023, Months::September};

    p.SetYear(2025);
    p.SetMonth(Months::May);

    cout << format("\n{}\n", p.ToString());

    //for (size_t i = 0; i < 10; i++)
    //{
    //    //p.Next();
    //    p.Previous();
    //    cout << format("\n{}\n", p.ToString());
    //}

    cout << "READY!\n";
}