#include <iostream>
#include <format>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Arrays (arreglos)
    int numbers[]{ 1,2,3,4,5 };
    float floats[5];
    short shorts[5][5];
    char hw[]{ "Hello World!" };

    cout << hw << " " << hw[10];

    for (auto i{ 0 }; i < sizeof(numbers)/sizeof(0); i++)
    {
        cout << numbers[i] << endl;
    }

    shorts[1][1] = 0;

    // ------
    vector<int> numbers2{ 1,2 };
    numbers2.push_back(3);
    numbers2.push_back(4);
    numbers2.push_back(5);

    for (auto i{ 0 }; i < numbers2.size(); i++)
    {
        cout << format("vector 1: {}, {}\n", i, numbers2[i]);
    }

    for (auto number : numbers2)
    {
        cout << format("vector 2: {}\n", number);
    }

    cout << "\nREADY!\n";
}