#include <iostream>
#include <string>

struct Date {
	int year;
	int month;
	int day;
};

void main() {
	int* x = new int;
	*x = 15;

	int *x_array = new int[1];
	x_array[0] = 19;

	std::cout << *x << std::endl;
	std::cout << x_array[0] << std::endl;

	Date test_date;
	test_date.year = 2017;
	test_date.month = 11;
	test_date.day = 7;

	std::cout << test_date.year << std::endl;
	std::cout << test_date.month << std::endl;
	std::cout << test_date.day << std::endl;

	Date* test_date2 = new Date;

	test_date2->year = 2017;
	test_date2->month = 11;
	test_date2->day = 7;

	std::cout << test_date2->year << std::endl;
	std::cout << test_date2->month << std::endl;
	std::cout << test_date2->day << std::endl;

	Date* test_date3 = new Date;
	(*test_date3).year = 2017;
	(*test_date3).month = 11;
	(*test_date3).day = 7;

	std::cout << (*test_date3).year << std::endl;
	std::cout << (*test_date3).month << std::endl;
	std::cout << (*test_date3).day << std::endl;



	delete test_date2;

	system("Pause");
}