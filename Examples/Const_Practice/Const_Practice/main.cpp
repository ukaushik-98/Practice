#include <iostream>
#include <string>

int main() {
	int y = 3;
	int z = 0;
	const int* x = &y;							//x is a pointer to an integer constant
	int* const a = &z;							//a is a constant pointer to an integer

	std::cout << "y: " << y << std::endl;       //3
	std::cout << "z: " << z << std::endl;		//0
	std::cout << "*x: " << *x << std::endl;		//3

	std::cout << "" << std::endl;
	// *x = z;	is illegal because you are changing the value of *x
	x = &z;     //is legal because you are changing the pointer to z and does not change the value of y
	std::cout << "y: " << y << std::endl;		//3
	std::cout << "z: " << z << std::endl;		//0	
	std::cout << "*x: " << *x << std::endl;		//0
	
	std::cout << "" << std::endl;
	// x = y;	is illegal because you are changing the pointer to y
	*a = y;     //is legal because you are changing the value of *a and changes the value of z because a still points to it
	std::cout << "y: " << y << std::endl;		//3
	std::cout << "z: " << z << std::endl;		//3
	std::cout << "*x: " << *x << std::endl;		//3

	//const int* const s; illegal to change both s and *s.


	system("Pause");
}