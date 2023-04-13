#include <iostream>
#include <string>
#include <format>
#include "Calc.h"
#include <string>

using namespace std;
using namespace Calc;

int main()
{

	std::string s{"abc"};
	for (auto c : s)
	{
		cout << c;
	}

	s = s + "def";
	cout << s.append("def");
	
	auto store{ 0.0f };

	while (true)
	{
		string input{};

		cout << "-> ";
		cin >> input;

		if (input == "q")
		{
			break;
		}

		if (input.length() > 1)
		{
			// +100
			char op{ input[0] };
			auto numPart{ input.substr(1, input.length() - 1) };
			auto num{ stof(numPart) };

			switch (op)
			{
			case '+':
				//store = Calc::add(num, store, 3);
				store = add(num, store, 3);
				break;
			default:
				break;
			}
		}

		cout << format("\n= {:.2f}\n", store);
	}

	cout << "READY!\n";
}
