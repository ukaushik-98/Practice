#include <iostream>
#include <string>

void main() {
	struct Date {
		int month;
		int day;
		int year;
	};

	Date test1;
	test1.month = 11;
	test1.day = 20;
	test1.year = 2017;

	std::cout << test1.month << std::endl;
	std::cout << test1.day << std::endl;
	std::cout << test1.year << std::endl;

	Date *test2 = new Date;
	(*test2).month = 11;
	(*test2).day = 20;
	(*test2).year = 2017;

	std::cout << (*test2).month << std::endl;
	std::cout << (*test2).day << std::endl;
	std::cout << (*test2).year << std::endl;

	Date *test3 = new Date;
	test3->month = 11;
	test3->day = 20;
	test3->year = 2017;

	std::cout << test3->month << std::endl;
	std::cout << test3->day << std::endl;
	std::cout << test3->year << std::endl;

	system("Pause");

}