#include <iostream>
#include <format>

using namespace std;

int main()
{

	int n{ 0 };

start:
	n++;
	cout << format("\nProcessing ... {}", n);
	this_thread::sleep_for(chrono::milliseconds(250));

	if (n == 20)
	{
		goto finish;
	}
	goto start;
finish:

    cout << "READY!\n";
}