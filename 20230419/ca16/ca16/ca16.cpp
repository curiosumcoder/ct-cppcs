#include <iostream>
#include <fstream>
#include <string>
#include <format>
#include <filesystem>
#include <windows.h>
#include <map>

using namespace std;

int main()
{
	SetConsoleOutputCP(1252);

	try
	{
		cout << filesystem::current_path() << std::endl;

		ifstream productsFile{ "products.txt" };

		if (productsFile.is_open())
		{
			while (!productsFile.eof())
			{
				cout << static_cast<char>(productsFile.get());
			}

			system("cls");

			// Regresar el inicio del file stream
			productsFile.clear();
			productsFile.seekg(0);

			map<int, string> productsMap{};

			for (string line; getline(productsFile, line);)
			{
				cout << line << endl;

				stringstream ss{ line };
				while (ss.good())
				{
					string part{};
					if (getline(ss, part, ','))
					{
						cout << format("\n{:<50}\n", part);
					}
				}

				string id = line.substr(0, line.find(','));
				string name = line.substr(line.find(',') + 1);
				cout << format("\n{} - {}\n", id, name);

				// Linear/Sequential containers
				// .. containers
				//productsMap.insert({ 1,"ABV" });
				productsMap.insert(pair<int, string>(stoi(id), name));
			}
			productsFile.close();

			system("cls");

			cout << productsMap[77];

			for (auto& p : productsMap)
			{
				cout << format("\n{} - {}\n", p.first, p.second);
			}
		}
		else
		{
			throw runtime_error("\nError when opening file!\n");
		}
	}
	catch (const exception& ex)
	{
		cerr << "Exception caught: " << ex.what() << std::endl;
	}

	cout << "\nREADY!\n";
}
