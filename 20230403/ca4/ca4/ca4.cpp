#include <iostream>
#include <format>
#include <string>
#include <limits>

using namespace std;

int main()
{
	short a{};
	unsigned short b{};
	int c{};
	long long int d{};

	// Format strings (fmt)
	int n{ 7 };

	n = n + 1;
	n += 1;
	n++;

	//n = ~n;
	//n = n << 2;

	cout << format("The value is: {}\n", n);
	cout << format("The value size is: {} bits\n", sizeof(n) * 8);
	cout << format("The value as bits es: {:#b}\n", n);
	cout << format("The value as bits es: {0:#b} - {0:b}\n", n);

	string typeName{ typeid(n).name() };
	int maxValue{ numeric_limits<int>::max() };
	int minValue{ numeric_limits<int>::min() };

	string output{};
	output = format(
		"The value type is {0},\t max: {1},\t min: {2}\n",
		typeName, maxValue, minValue);
	cout << output;

	float m{ 11 };
	cout << format("The value is: {:f}\n", m);
	cout << format("The value is: {:.2f}\n", m);

	char char1{ 'A' };
	wchar_t char2{ 'B' };

	cout << "READY!\n";
}