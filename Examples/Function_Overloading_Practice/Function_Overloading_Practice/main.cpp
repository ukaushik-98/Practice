#include <string>
#include <iostream>
#include <functional>

struct transform_obj {
	int a;
	int b;
	int c;
};

int transformer(int x) {
	x = 7;
	return x;
}

float transformer(float x) {
	x = 7.7;
	return x;
}

std::string transformer(std::string x) {
	x = "SUCCESS!";
	return x;
}

transform_obj transformer(transform_obj x) {
	x.a = 7;
	x.b = 8;
	x.c = 9;
	return x;
}

void main() {
	int a = 5;
	float b = 1.1;
	std::string c = "TESTING...";
	transform_obj d{0,1,2};
	//d.a = 0;
	//d.b = 1;
	//d.c = 2;
	std::string e = "LAMBDA TEST...";

	std::function<std::string(std::string)> f;
	f = [](std::string x) {
		x = "LAMBDA SUCCESS!";
		return x; };

	std::cout << "BEFORE: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d.a: " << d.a << std::endl;
	std::cout << "d.b: " << d.b << std::endl;
	std::cout << "d.c: " << d.c << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "" << std::endl;

	a = transformer(a);
	b = transformer(b);
	c = transformer(c);
	d = transformer(d);
	e = f(e);

	std::cout << "AFTER: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d.a: " << d.a << std::endl;
	std::cout << "d.b: " << d.b << std::endl;
	std::cout << "d.c: " << d.c << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "" << std::endl;

	system("Pause");
}