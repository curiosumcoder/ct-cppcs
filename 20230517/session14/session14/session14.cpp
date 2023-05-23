#include <iostream>
#include <string>
#include <format>
#include <thread>
#include <chrono>
#include <future>
#include <mutex>
#include <atomic>

using namespace std;
using namespace std::chrono;

void delay(long m)
{
	this_thread::sleep_for(chrono::milliseconds(m));
}

string threadId()
{
	thread::id ti{ this_thread::get_id() };
	stringstream ss{};
	ss << ti;

	return ss.str();
}

void printNumbers(int start, int end) {
	auto ti{ threadId() };

	for (int i = start; i <= end; i++) {
		cout << format("Task: {:s}, value: {:d}\n", ti, i);
		delay(1000);
	}
}

// Mutex
mutex m;
int inventory{ 20 };

void printNumbersMutex(int start, int end) {
	auto ti{ threadId() };

	for (int i = start; i <= end; i++) {
		m.lock();
		cout << format("Task: {:s}, value: {:d}, inventory: {:d}\n", ti, i, inventory);
		inventory--;
		delay(1000);
		m.unlock();
	}
}

// Atomics
atomic_int inventoryA{ 20 };

void printNumbersAtomic(int start, int end) {
	auto ti{ threadId() };

	for (int i = start; i <= end; i++) {
		cout << format("Task: {:s}, value: {:d}, inventory: {:d}\n", 
			ti, i, inventoryA.load());		
		delay(1000);
		inventoryA--;
	}
}

int main()
{
	// * Multithreading
	// Process (OS)
	// - CPU
	// - Memory
	// - Threads (hilos)
	//		- *Multi Task (thread)
	//		- Concurrency
	//		- Parallels

	auto now0 = high_resolution_clock::now();
	// Example 1
	//printNumbers(1, 10);
	//printNumbers(11, 20);

	// Example 2
	//thread t1{ printNumbers, 1, 10 };
	//thread t2{ printNumbers, 11, 20 };
	//t1.join();
	//t2.join();

	// Example 3
	//future<void> result1 = async(launch::async, printNumbers, 1, 10);
	//future<void> result2 = async(launch::async, printNumbers, 11, 20);
	//result1.get();
	//result2.get();

	auto now1 = high_resolution_clock::now();

	cout << format("Duration: {} ms\n", duration_cast<milliseconds>(now1 - now0).count());

	// Example 4
	// Mutexes, Mutual exclusion algorithm (mutex)
	// Mechanism for preventing multiple threads from accessing resources simultaneously.
	//future<void> result1m = async(launch::async, printNumbersMutex, 1, 10);
	//future<void> result2m = async(launch::async, printNumbersMutex, 11, 20);
	//result1m.get();
	//result2m.get();

	// Example 5
	// Atomics
	// Lock - concurrent programming without explicit locks. CPUs support.
	//cout << format("\ninventoryA is lock free: {}\n", 
	//	inventoryA.is_lock_free());
	//cout << format("\ninventoryA: {:d}\n", inventoryA.load());
	//future<void> result1a = async(launch::async, printNumbersAtomic, 1, 10);
	//future<void> result2a = async(launch::async, printNumbersAtomic, 11, 20);
	//result1a.get();
	//result2a.get();
	//cout << format("\ninventoryA: {:d}\n", inventoryA.load());

	cout << "READY!\n";
}
