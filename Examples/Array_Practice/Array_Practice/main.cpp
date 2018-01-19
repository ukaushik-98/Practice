#include <string>
#include <iostream>

struct Date {
	int day;
	int month;
	int year;
};

void user_input(int** x) {
	for (int i = 0; i < 2; i++) {
		int* temp = new int[3];
		for (int h = 0; h < 3; h++) {
			std::cin >> temp[h];
		}
		x[i] = temp;
	}
}

int main() {
	int** x = new int*[2];

	system("Pause");
}