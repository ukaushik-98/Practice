#include <string>
#include <iostream>
#include <functional>

int plus(int x) {
	return x+=1;
}

int minus(int x) {
	return x-=1;
}

int divide(int x) {
	return x / 2;
}

int mult(int x) {
	return x * 2;
}

int transform(int x, std::function <int(int)> f) {
	return f(x);
}

int add(int& y) {
	y += 5;
	return y;
}

int main() {
	std::function <int(int)> f;
	int x = 5;
	int& y = x;
	int a = 1;
	//y = a;

	std::cout << "funct: " << add(y) << std::endl;
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "" << std::endl;

	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			f = plus;
			std::cout << "funct1: " << transform(x, f) << std::endl;
		}
		else if (i == 1) {
			f = minus;
			std::cout << "funct1: " << transform(x, f) << std::endl;
		}
		else if (i == 2) {
			f = divide;
			std::cout << "funct1: " << transform(x, f) << std::endl;
		}
		else if (i == 3) {
			f = mult;
			std::cout << "funct1: " << transform(x, f) << std::endl;
		}
		else {
			int* x = new int;
			*x = 3;
			int b = 5;
			int* a = new int;
			a = &b;
			std::function <int(int*)> g;
			g = [&](int* x) {
				*x *= 2;
				*x += *a;
				*a = 10;
				return 0; };
			std::cout << "a: " << *a << std::endl;
			std::cout << "b: " << b << std::endl;
			std::cout << "g(x): " << g(x) << std::endl;
			std::cout << "*x: " << *x << std::endl;

		}

	}

	system("Pause");
}
