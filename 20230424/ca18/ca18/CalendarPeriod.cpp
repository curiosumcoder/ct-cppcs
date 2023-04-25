#include "CalendarPeriod.h"
#include <ctime>
#include <iostream>
#include <string>
#include <format>

using namespace std;

namespace CPPCompany::Billing {

	CalendarPeriod::CalendarPeriod() {
		cout << "Constructor CPPCompany::Billing::CalendarPeriod";

		// current date/time based on current system
		struct tm newtime;
		time_t now = time(0);
		localtime_s(&newtime, &now);

		year = 1900 + newtime.tm_year;
		month = static_cast<Months>(1 + newtime.tm_mon);
	}

	CalendarPeriod::CalendarPeriod(int pYear, Months pMonth) {
		year = pYear;
		month = pMonth;
	}

	CalendarPeriod::~CalendarPeriod()
	{
		cout << "Destructor Facturacion::Periodo";
	}

	string CalendarPeriod::ToString() {
		return format("{:d}/{:d}", static_cast<short>(month), year);
	}
}