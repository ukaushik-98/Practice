#include <string>
#include <iostream>

void square(int* b) {
	*b += 2;
}

void main() {
	int a = 6;
	int* b = new int;
	b = &a;
	square(b);

	int arr[2];
	int** new_arr = new int*[2];
	new_arr[0] = arr;

	std::cout << "a: " << a << std::endl;
	std::cout << "*b: " << *b << std::endl;
	std::cout << "a: " << a << std::endl;
	system("Pause");
}