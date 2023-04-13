#include <iostream>
#include <string>
#include <format>
#include "Calc.h"

using namespace std;
using namespace Calc;

int main()
{
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
