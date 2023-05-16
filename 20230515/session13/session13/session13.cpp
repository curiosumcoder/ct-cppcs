#include <iostream>
#include <string>
#include <vector>

// Uniform container for storing callable objects
#include <functional>

using namespace std;

float potencia(float a, float b)
{
	return pow(a, b);
}

double potenciad(double a, double b)
{
	return pow(a, b);
}

void operar(function<float(float, float)> fn, float a, float b)
{
	cout << "El resultado es " << fn(a, b) << endl;
}


void operar2(float(*fn)(float, float), float a, float b)
{
	cout << "El resultado es " << fn(a, b) << endl;
}


// Templates, type arguments
template <typename T>
auto potenciaTemplate(T a, T b)
{
	T result{1};

	for (size_t i = 0; i < b; i++)
	{
		result *= a;
	}

	return result;
}

// Templates, value arguments
template <typename T, int N>
auto potenciaTemplate2(T a)
{
	T result{ 1 };

	for (size_t i = 0; i < N; i++)
	{
		result *= a;
	}

	return result;
}

template <typename T>
class ItemTemplate
{
public:
	T data{};
	ItemTemplate* next;
	ItemTemplate(T data, ItemTemplate* next)
	{
		this->data = data;
		this->next = next;
	}
};

int main()
{
	// Container for storing callable objects & Lambda expressions
	function<void()> f1 = []() { cout << "Hi from Lambda"; };
	f1();

	function<float(float, float)> f2 =
		[](float peso, float estatura) -> float {
		return peso / static_cast<float>(pow(estatura, 2));
	};

	cout << f2(100.0, 1.8f);
	auto suma = [](float a, float b) {return a + b; };
	auto resta = [](float a, float b) {return a - b; };
	auto mult = [](float a, float b) {return a * b; };
	auto div = [](float a, float b) {return a / b; };

	operar(suma, 3, 2);
	operar(resta, 3, 2);
	operar(mult, 3, 2);
	operar(div, 3, 2);
	operar(potencia, 3, 2);

	// Function pointers
	float(*f3)(float, float) {};
	f3 = &potencia;
	cout << f3(3, 2) << endl;

	using pToF = float(*)(float, float);
	pToF f4 = &potencia;
	cout << f4(3, 2) << endl;

	// Function pointer as parameter
	operar2(&potencia, 3, 2);

	// Templates
	vector<int> v1{};

	//template <typename T>
	//auto potenciaTemplate(T a, T b) ....

	cout << potenciaTemplate<double>(3,2) << endl;
	cout << potenciaTemplate<int>(3, 2) << endl;
	cout << potenciaTemplate2<int, 2>(3) << endl;

	// Templates with classes
	ItemTemplate<string>* first{ new ItemTemplate<string>{"Chai", nullptr} };
	first->next = new ItemTemplate<string>{ "Orange", nullptr };

	using its = ItemTemplate<string>;
	first->next->next = new its{ "Melon", nullptr };

	auto current{ first };

	while (current != nullptr)
	{
		cout << current->data << endl;
		current = current->next;
	}

	cout << "READY!\n";
}