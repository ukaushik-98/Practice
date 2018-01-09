#include <iostream>
#include <string>

void main() {
	struct date {
		int year;
		int month;
		int day;
	};

	date test_date1;
	test_date1.year = 2017;
	test_date1.month = 11;
	test_date1.day = 8;

	std::cout << test_date1.year << std::endl;
	std::cout << test_date1.month << std::endl;
	std::cout << test_date1.day << std::endl;

	date *test_date2 = new date;
	(*test_date2).year = 2017;
	(*test_date2).month = 11;
	(*test_date2).day = 8;

	std::cout << (*test_date2).year << std::endl;
	std::cout << (*test_date2).month << std::endl;
	std::cout << (*test_date2).day << std::endl;

	date *test_date3 = new date;
	(test_date3) -> year = 2017;
	(test_date3) -> month = 11;
	(test_date3) -> day = 8;

	std::cout << (test_date3) -> year << std::endl;
	std::cout << (test_date3) -> month << std::endl;
	std::cout << (test_date3) -> day << std::endl;

	system("Pause");

}