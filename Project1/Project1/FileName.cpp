#include <iostream>
#include <string>

class Base {
public:
	void print() {
		std::cout << name << ": " << number_sides << std::endl;
	}

protected:
	int number_sides = 0;
	std::string name = "Figure";

};


class Triangle :public Base {
public:
	Triangle(){
		number_sides = 3;
		name = "Triangle";
	}
};


class Fourangle :public Base {
public:
	Fourangle() {
		number_sides = 4;
		name = "Fourangle";
	}
};





int main() {

	std::cout << "Number of edges:" << std::endl;
	Base x1; Triangle x2;  Fourangle x3;
	x1.print();
	x2.print();
	x3.print();

	return 0;
}