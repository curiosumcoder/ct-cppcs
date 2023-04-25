#pragma once

#include <string>

using namespace std;

// public -> Pascal Case
// private -> caml Case
namespace CPPCompany::Billing {
	enum class Months {
		January = 1, February, March,
		April, May, June, July,
		August, September, October,
		November, December
	};

	// Constructor
	// Destructor
	class CalendarPeriod
	{
		int year;
		Months month;
	public:
		CalendarPeriod();
		CalendarPeriod(int pYear, Months pMonth);
		~CalendarPeriod();
		string ToString();
		void Next();
		void Previous();

		void SetYear(int year);
		int GetYear();
		void SetMonth(Months month);
		Months GetMonth();
		short GetMonthAsShort();
	};
}

