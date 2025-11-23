#include <iostream>

int perimComp();
void greetings();
void results (int);

int main () {
	int result;
	
	result = perimComp();
	results (result);
}


int perimComp () {
	int length;
	int width;
	
	greetings();
	
	std::cout << "The length: ";
	std::cin >> length;
	
	std::cout << "The width: ";
	std::cin >> width;
	
	return length * width;
}

void greetings(){
	std::cout << "Perimeter Computation !!" << std::endl;
}

void results (int perimeter){
	std::cout << "The perimeter is: " << perimeter;
}
