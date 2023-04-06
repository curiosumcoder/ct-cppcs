#include <iostream>
#include <format>

using namespace std;

int main()
{
    // u, l, ll 
    // 77
    // 1'000'000, 052, 0x2a, 0X2A, 0b101010;
    auto n{ 77 };

    cout << format("{:<10}{:<10}{:<10}{:>10}{:^15}",
            "Value", "Oct", "Hex", "Bin", "Type");
    cout << format("\n{0:<10}{0:<10o}{0:<10x}{0:>10b}{1:^15}\n",
        n, typeid(n).name());

    auto m{ 77.0 };
    cout << format("The number: {:<10.2f} is type {:<10}.\n",
        m, typeid(m).name());

    constexpr auto gravitationalConstant = 6.67430e-11f;

    auto g{ gravitationalConstant };
    cout << format("The number: {:#.50f} is type {}. {:.5s}\n",
        g, typeid(g).name(), "This is a test");

    cout << "READY!\n";
}
