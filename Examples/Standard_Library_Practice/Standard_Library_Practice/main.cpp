#include <string>
#include <iostream>

void plus1(int& k) {
	k++;
}

void plus2(int* a) {
	(*a)++;
}

int main() {
	int i = 10;
	int x = 15;
	int& k = i;
	int* a = &k;

	std::cout << "k: " << k << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "x: " << x << std::endl;
	std::cout << "*a: " << *a << std::endl;

	std::cout << "" << std::endl;

	plus1(k);

	std::cout << "k: " << k << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "x: " << x << std::endl;
	std::cout << "*a: " << *a << std::endl;

	std::cout << "" << std::endl;

	plus2(a);

	std::cout << "k: " << k << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "x: " << x << std::endl;
	std::cout << "*a: " << *a << std::endl;

	std::cout << "" << std::endl;

	system("Pause");

}