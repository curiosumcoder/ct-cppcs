#include <iostream>
#include <string>
#include <format>
#include <random>
#include <vector>
#include <memory>
#include "session12.h"

using namespace std;

int randomInt(int n, int m)
{
	std::random_device rd;
	std::mt19937 mt(rd());

	std::uniform_int_distribution<> distr(n, m);
	return  distr(mt);
}


void delay(long m)
{
	this_thread::sleep_for(chrono::milliseconds(m));
}


class Product {

public:
	int Id{};
	string Name;
	float Price{};

	Product() {
		cout << "\nProduct constructor ...\n";
	}

	Product(int id, string name, float price) :Product() {
		//this->Id = id;
		//this->Name = name;
		//this->Price = price;

		Id = id;
		Name = name;
		Price = price;
	}

	~Product() {
		//cout << format("\nProduct {} destructor ...\n", this->ToString());
		cout << format("\nProduct {} destructor ...\n", ToString());
	}

	string ToString() {
		//return format("{:d}, {:s}, {:.2f}", this->Id, this->Name, this->Price);
		return format("{:d}, {:s}, {:.2f}", Id, Name, Price);
	}
};


void PointerPrimer()
{
	// Pointers primer
	int a{ 55 };
	int* pa{ &a }; // & address operator. An address, pointer to "a"
	int vpa{ *pa }; // * dereference operator.  Value of "a" via pointer

	cout << format("\na value: {:d}, a address: {:p}, a value via pointer: {:d}",
		a, static_cast<void*>(pa), vpa);
	auto size = sizeof(a);
	++pa;
	vpa = *pa; // :-(
	cout << format("\na value: {:d}, a address: {:p}, a value via pointer: {:d}",
		a, static_cast<void*>(pa), vpa);

	// Ooops!
	while (true)
	{
		++pa;
		vpa = *pa;
	}
}


void DynamicStorage()
{
	// Null Pointer
	int a{ 77 };

	//int* pa;
	int* pa{};
	//pa = nullptr;
	pa = &a;

	cout << format("\na address: {:p}\n", static_cast<void*>(pa));

	//int* pa{ &a };

	// Dynamic Storage Duration
	int* pa2{ new int{ 77 } };
	auto pa3{ new int };

	cout << format("\na value: {:d}, a2 value: {:d}, a3 value: {:d}\n", *pa, *pa2, *pa3);

	while (true)
	{
		//delay(100);
		pa3 = new int{ randomInt(1,100) };
		cout << "Processing ints ...\n";
		//delete pa3;
	}
}


void DynamicStorate2()
{
	// Automatic Storage Duration
	Product p0{ 1,"Chai"s, 100.0 };
	// Member access . (dot)
	//cout << format("\nId: {:d}, Name: {:s}, Price: {:.2f}\n", p0.Id, p0.Name, p0.Price);

	// Dynamic Storage Duration
	Product* p1{ new Product{ 2,"Melon", 200.0 } };
	// Derefence, *
	//cout << format("\nId: {:d}, Name: {:s}, Price: {:.2f}\n", (*p1).Id, (*p1).Name, (*p1).Price);
	// Member dereference, ->
	//cout << format("\nId: {:d}, Name: {:s}, Price: {:.2f}\n", p1->Id, p1->Name, p1->Price);
	//delete p1; // :-(

	vector<Product*> products{ p1 };
	auto p2{ new Product{ 3,"Orange", 300.0 } };
	products.push_back(p2);

	for (auto p : products)
	{
		cout << format("\nId: {:d}, Name {:s}, Price: {:.2f}\n", p->Id, p->Name, p->Price);
		delete p;
	}
}


void SmartPointers()
{
	// Smart Pointers

	// Unique Pointers (Smart Pointer)
	// Exclusive ownership of a dynamically allocated object

	//unique_ptr<Product> p1{ new Product{ 1,"Chai"s, 100.0 } };
	auto p1{ make_unique<Product>(1,"Chai"s, 100.0f) }; // Recommended way
	cout << format("\nId: {:d}, Name: {:s}, Price: {:.2f}\n", p1->Id, p1->Name, p1->Price);

	// Unique pointers cannot be copied
	unique_ptr<Product> p1c{};
	//p1c = p1;
	//p1c = move(p1);

	if (p1c)
	{
		cout << format("\nId: {:d}, Name: {:s}, Price: {:.2f}\n", p1c->Id, p1c->Name, p1c->Price);
		//p1c.reset();
	}

	// Shared pointers (Smart Pointer)
	// Enable multiple smart pointers to share ownership of a dynamically allocated object
	//shared_ptr<Product> p2{ new Product{ 2,"Melon", 200.0 } };
	auto p2{ make_shared<Product>(2,"Melon", 200.0f) }; // Recommended way
	cout << format("\nId: {:d}, Name: {:s}, Price: {:.2f}\n", p2->Id, p2->Name, p2->Price);

	shared_ptr<Product> p2c{};
	p2c = p2;
	p2c->Price = 255.0;

	cout << format("\nId: {:d}, Name: {:s}, Price: {:.2f}\n", p2c->Id, p2c->Name, p2c->Price);

	// Check the reference count
	//p2.reset();
	//p2c.reset();
	cout << format("\nReference count: {}\n", p2c.use_count());
}

int main()
{

	cout << "READY!\n";
}
