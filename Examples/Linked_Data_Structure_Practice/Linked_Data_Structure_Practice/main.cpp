#include <iostream>
#include <string>

struct String {
	char letter;
	String* pointer;
};

int main() {
	String* head = new String;

	String* fourth = new String;
	fourth->letter = 'd';
	fourth->pointer = nullptr;

	String* third = new String;
	third->letter = 'c';
	third->pointer = fourth;

	String* second = new String;
	second->letter = 'b';
	second->pointer = third;

	String* first = new String;
	first->letter = 'a';
	first->pointer = second;

	head = first;

	while (head != nullptr) {
		std::cout << "Letter: " << head->letter << std::endl;
		head = head->pointer;
	}

	system("Pause");
	delete head;
	delete fourth;
	delete third;
	delete second;
	delete first;
}