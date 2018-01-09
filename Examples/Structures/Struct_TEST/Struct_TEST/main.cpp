#include <iostream>
#include <string>

void main() {
	struct Student {
		int id;
		char grade_option;
		std::string name;
	};

	Student* student1 = new Student;
	student1->id = 1;
	student1->grade_option = 'P';
	student1->name = "Stu";

	Student* student2 = new Student;
	student2->id = 2;
	student2->grade_option = 'G';
	student2->name = "Nue";

	Student* student3= new Student;
	student3->id = 3;
	student3->grade_option = 'G';
	student3->name = "Gew";

	Student* student_array = new Student[3];

	student_array[0] = *student1;
	student_array[1] = *student2;
	student_array[2] = *student3;

	std::cout << student_array[0].id << std::endl;
	std::cout << student_array[0].grade_option << std::endl;
	std::cout << student_array[0].name << std::endl;

	system("Pause");
}