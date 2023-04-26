#include <iostream>
#include <format>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <stack>
#include <queue>
#include <bitset>
#include <set>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Product {
public:
	int Id;
	string Name;
	bool operator< (const Product& p) const
	{
		return (this->Name < p.Name);
	}
};

int main()
{


	cout << "\nREADY!\n";
}

void sets() {
	set<int> s1{ 1,2,3,4,5 };

	s1.insert(6);
	s1.insert(5);
	s1.insert(5);

	auto s = s1.contains(7);

	if (!s)
	{
		s1.emplace(7);
	}
	s1.erase(4);

	cout << "\nset iterate via for range expression\n";
	for (auto& n : s1)
	{
		cout << format("\n{}", n);
	}

	set<Product> s2;
	s2.insert({ 1,"Coco" });
	s2.insert({ 2,"Banano" });
	s2.insert({ 3,"Cas" });

	//s2.erase({ 1,"Coco" });

	auto pend = find_if(s2.begin(), s2.end(), [](auto& p) { return p.Name.find("a") != string::npos; });
	if (pend != s2.end())
	{
		cout << (*pend).Name;
	}

	cout << "\n----------------------------------------------\n";
	cout << "\nset iterate via for range expression\n";
	for (auto& p : s2)
	{
		cout << format("\n{}", p.Name);
	}

	multiset<int> ms1{ 1,1,2,2,3,4,5 };
	cout << "\n----------------------------------------------\n";
	cout << "\nmultiset iterate via for range expression\n";
	for (auto& n : ms1)
	{
		cout << format("\n{}", n);
	}

	unordered_set<int> us1{ 1,1,2,2,3,4,5 };
	cout << "\n----------------------------------------------\n";
	cout << "\nunordered_set iterate via for range expression\n";
	for (auto& n : us1)
	{
		cout << format("\n{}", n);
	}
}

void bitsets_unions() {
	bitset<8> bs1{ 0b10000001 };
	bitset<8> bs2{ "10000101" };

	cout << format("\n{}, {}, test:{}", bs1.to_string(), bs2.to_string(), bs1.test(1));

	union MyNumber
	{
		int in;
		unsigned int uin;
	};

	MyNumber n{ -7 };

	cout << format("\n{}, {}", n.in, n.uin);
}

void stacks() {
	// Last-In First-Out (LIFO)
	stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.emplace(6);

	s1.pop();

	cout << "\n----------------------------------------------\n";
	cout << "\nstack\n";

	cout << format("\n{}\n", s1.top());

	while (!s1.empty()) {
		cout << s1.top() << " ";
		s1.pop();
	}

	// First-In First-Out (FIFO)
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);
	q1.emplace(6);

	q1.pop();

	cout << "\n----------------------------------------------\n";
	cout << "\nqueue\n";

	cout << format("\n{}\n", q1.front());

	while (!q1.empty()) {
		cout << q1.front() << " ";
		q1.pop();
	}

	// Heap
	auto pqcomp = [](int a, int b) {
		// Elements with odd values have higher priority than elements with even values
		if (a % 2 == 1 && b % 2 == 0) {
			return true;
		}
		else if (a % 2 == 0 && b % 2 == 1) {
			return false;
		}
		else {
			// For elements with the same parity, use the default less-than operator
			return a < b;
		}
	};

	priority_queue<int, vector<int>, decltype(pqcomp)> pq1(pqcomp);
	//priority_queue<int> pq1;
	pq1.push(1);
	pq1.push(2);
	pq1.push(3);
	pq1.push(4);
	pq1.push(5);

	cout << "\n----------------------------------------------\n";
	cout << "\npriority_queue\n";

	while (!pq1.empty()) {
		cout << pq1.top() << " ";
		pq1.pop();
	}
}

void lists() {
	list<int> l1{ 1,2,3,4,5 };

	l1.remove(3);
	l1.remove_if([](auto& n) { return n % 2 == 0; });

	l1.assign({ 1,1,2,2,3,4,5,5,-1 });
	//l1.unique();

	//list<int> l2{ 6,7,8,9 };
	//l1.merge(l2);

	l1.sort();
	//l1.sort([](auto& a, auto& b) { return a > b; });

	l1.reverse();

	cout << "\nlist iterate via for range expression\n";
	for (auto& n : l1)
	{
		cout << format("\n{}", n);
	}

	forward_list<int> fl1{ 1,2,3,4,5 };
}

void deques()
{
	deque<int> d1{ 1,2,3,4,5 };

	d1.push_front(0);
	d1.push_front(-1);
	d1.pop_back();

	auto pend = find(d1.begin(), d1.end(), 3);
	d1.erase(pend);

	cout << "\ndeque iterate via for range expression\n";
	for (auto& n : d1)
	{
		cout << format("\n{}", n);
	}
}

void vectors()
{
	vector<int> v1{ 1,2,3,4,5 };

	cout << format("\ncapacity: {}, size: {}", v1.capacity(), v1.size());

	v1.reserve(20);
	cout << format("\ncapacity: {}, size: {}", v1.capacity(), v1.size());

	v1.push_back(6);
	cout << format("\ncapacity: {}, size: {}", v1.capacity(), v1.size());

	v1.resize(12);
	cout << format("\ncapacity: {}, size: {}", v1.capacity(), v1.size());

	v1.shrink_to_fit();
	cout << format("\ncapacity: {}, size: {}", v1.capacity(), v1.size());

	//v1.assign({ 6, 7, 8, 9 });

	auto pend = find(v1.begin(), v1.end(), 3);
	//pend = v1.insert(pend, 9);
	if (pend != v1.end())
	{
		pend = v1.emplace(pend, 7);
	}

	v1.emplace_back(8);
	cout << format("\ncapacity: {}, size: {}", v1.capacity(), v1.size());

	//v1.at(3);
	//v1[3];

	//swap(v1.at(2),v1.at(3));

	//pend = remove(v1.begin(), v1.end(), 4);
	//for_each(v1.begin(), pend, [](auto& n) { cout << format("\n{}", n); });

	cout << "\n----------------------------------------------\n";

	cout << "\nvector iterate via for range expression\n";
	for (auto& n : v1)
	{
		cout << format("\n{}", n);
	}
}

void arrays() {

	// Pointers primer
	int a{ 55 };
	int* pa = &a; // & address operator. An address, pointer to "a"
	int vpa = *pa; // * dereference operator.  Value of "a" via pointer

	cout << format("\na value: {:d}, a address: {:p}, a value via pointer: {:d}", a, static_cast<void*>(pa), vpa);
	auto size = sizeof(a);
	++pa;
	vpa = *pa; // :-(
	cout << format("\na value: {:d}, a address: {:p}, a value via pointer: {:d}", a, static_cast<void*>(pa), vpa);

	// CRUD
	cout << "\narray";

	cout << "\ncreate";
	array<int, 5> a1{ 1,2,3,4,5 };

	cout << "\narray, iterate via pointers\n";
	auto raw{ a1.data() };
	auto rawEnd{ raw + 5 };

	while (raw != rawEnd)
	{
		cout << *raw << endl;
		raw++;
	}

	cout << "\n----------------------------------------------\n";

	cout << "\narray, iterate via iterator\n";
	auto c1start = a1.begin();
	while (c1start != a1.end())
	{
		cout << *c1start << endl;
		c1start++;
	}

	cout << "\n----------------------------------------------\n";

	cout << "\narray iterate via for range expression\n";
	for (auto& n : a1)
	{
		cout << format("\n{}", n);
	}

	cout << format("\nread: {}", a1[2]);
	cout << format("\nread: {}", a1.at(2));
	cout << format("\nread: {}", get<2>(a1));

	auto c1e = a1.empty();
	auto c1s = a1.size();
	auto c1f = a1.front();
	auto c1b = a1.back();

	//auto pend = remove(c1.begin(), c1.end(), 4);
	//for_each(c1.begin(), pend, [](auto& n) { cout << format("\n{}", n); });

	cout << "\n----------------------------------------------\n";

	auto pend = remove_if(a1.begin(), a1.end(), [](auto& n) {return (n % 2) == 0; });
	for_each(a1.begin(), pend, [](auto& n) { cout << format("\n{}", n); });

	cout << "\n----------------------------------------------\n";
	for (auto& e : a1)
	{
		cout << format("\n{}", e);
	}

	//swap(a1.at(2), a1.at(3));
}