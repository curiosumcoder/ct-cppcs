#include <iostream>
#include <format>
#include <string>
#include <vector>

using namespace std;

void demo(const int& n)
{
	//n = 111;

	//auto& n2 = const_cast<int&>(n);
	int& n2 = const_cast<int&>(n);
	n2 = 333;

	//n = 777;

	cout << "demo, n: " << n;
}

enum class colors {
	Red, Green, Blue
};

int main()
{
	// Implicit conversion
	// Explicit conversion
	float a{ 1 };
	//int b{ 1.1 };
	auto b{ 1.1 };

	cout << format("b = {:f}\n", b);

	float c{};
	int d{ 1 };

	c = static_cast<float>(d) / 5;

	cout << format("c = {:f}\n", c);

	int e{};
	//e = 1.1;
	e = static_cast<int>(1.1);

	auto n1{ 22 };
	demo(n1);
	cout << format("n1 = {:d}\n", n1);

	int color{};
	color = static_cast<int>(colors::Blue);

	auto f{ stoi("111") };
	auto g{ stof("111.11") };
	auto h{ to_string(f) };
	auto j{ to_string(g) };

	auto k{ format("{:d}", f) };
	auto l{ format("{:f}", g) };


	std::vector<string> names{ "Carlos","Alberto" };
	auto names0 = { "Carlos"s,"Alberto"s };

	typedef std::vector<string> StrVector; // C-style
	StrVector names2{ "Carlos"s,"Alberto"s };

	using StringVector = std::vector<string>; // C++ style
	StringVector names3{ "Carlos"s,"Alberto"s };

	cout << "READY!\n";
}
