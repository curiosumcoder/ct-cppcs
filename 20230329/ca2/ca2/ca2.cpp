// C++ Standard Library --> std
#include <iostream>
#include <string>

int main()
{
    // Variable declaration (type, identifier)   
    // int, platform dependant
    // Value Initialize
    //int age = 1; // C compliant
    int age{0}; //age{};
    std::string name{}; // name{"NAME"};

    std::cout << "Type your name: ";
    std::cin >> name;

    std::cout << "\nType your age: ";
    std::cin >> age;

    std::cout << "Hi " << name << ", your age is "
        << age << std::endl;
    std::cout << "Ready!\n";
}