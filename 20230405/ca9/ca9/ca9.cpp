#include <iostream>
#include <format>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1252);
	
	int n{ 10 };

	for (auto i{0};i < 20;i++)
	{
		cout << format("\nProcessing for ... {} ", i);
	}

	{
		n = 15;
		if (true)
			cout << "Esto es válido";
		else
			cout << "Esto es válido";
	}

	while (n < 20)
	{
		n++;
		cout << format("\nProcessing while ... {} ", n);

		auto type{ 1 };
		type = (n % 2) > 0 ? 1 : 2;
		type = 3;

		if (type == 1)
		{
			continue;
		}

		switch (type)
		{
		case 1:
			cout << "¡Es impar!";
			break;
		case 2:
			cout << "¡Es par!";
			break;
		default:
			cout << "¡No se que es!";
			break;
		}

		//if (type == 1)
		//{
		//	cout << "¡Es impar!";
		//}
		//else
		//{
		//	cout << "¡Es par!";
		//}

		//if ((n % 2) > 0)
		//{
		//	type = 1;
		//}
		//else
		//{
		//	type = 1;
		//}

		//cout << type;
	}

	//n = 0;
	//do
	//{
	//	n++;
	//	cout << format("\nProcessing do/while ... {}", n);
	//} while (n < 20);

    cout << "\nREADY!\n";
}