#include <iostream>
#include <string>
#include <format>

using namespace std;

float add(const float& a, float& b, const float& c = 0);

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

// references
float add(const float& a, float& b, const float& c)
{
	//a = 100;

	return a + b + c;
}
