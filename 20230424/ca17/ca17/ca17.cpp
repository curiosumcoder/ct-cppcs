#include <iostream>
#include <fstream>
#include <string>
#include <format>
#include <sstream>
#include <array>
#include <vector>

using namespace std;

string ltrim(const string& s)
{
	size_t start = s.find_first_not_of(" \n\r\t\f\v");
	return (start == string::npos) ? "" : s.substr(start);
}

// Plain-Old-Data Classes (POD)
// Class
struct Product {
	int Id;
	string Name;
	float Price;
};

class ProductC {
	int Id;
	string Name;
	float Price;
};

int main()
{
	try
	{
		vector<Product> products{};

		string fileName = "products2.csv";
		ifstream productsFile;
		productsFile.open(fileName);

		if (productsFile.is_open())
		{
			for (string line; getline(productsFile, line);)
			{

				stringstream ss{ line };
				//array<string> parts0{"","",""};
				array<string, 3> parts; // Para ver al array, más práctico el vector

				short i{ 0 };
				while (ss.good())
				{
					string part{};
					if (getline(ss, part, ','))
					{
						parts[i] = ltrim(part);
						i++;
					}
				}

				int id = stoi(parts[0]);
				string name = parts[1];
				float price = stof(parts[2]);

				//products.push_back({ id, name, price });
				products.push_back(Product{ id, name, price });
			}
			productsFile.close();

			if (products.size() > 0)
			{
				cout << format("\n{:<4s} | {:<40s} | {:s}\n", "Id", "Name", "Price");

				for (auto& p : products)
				{
					cout << format("\n{:<4d} | {:<40} | {:.2f}", 
						p.Id, p.Name, p.Price);
				}
			}					

			ofstream productsFileOut{ fileName };

			if (productsFileOut.is_open())
			{
				for (auto& p : products)
				{
					productsFileOut << format("{:d}, {:s}, {:.2f}\n", 
						p.Id, p.Name, p.Price + 1);
				}
				productsFileOut.close();
			}
		}
		else
		{
			cout << format("Couldn't open file {}", fileName);
		}
	}
	catch (const std::exception& ex)
	{
		cout << "Exception: " << ex.what() << endl;
	}

	cout << "READY!\n";
}