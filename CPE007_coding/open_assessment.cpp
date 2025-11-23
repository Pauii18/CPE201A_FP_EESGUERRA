#include <iostream>
int main () {
 	const int size = 10;
 	int scores [size] = {95, 85,78,88,92,80,75,80,89,91 };
	
 	for (int i = 0; i <size; i++) {
 		std::cout << scores [i] << " ";
 		
	 }
	 
	 std::cout << std::endl << std::endl;
	 for (int i = 0; i <size; i++) {
	 	std::cout << "address of element " << i <<": " << &scores[i] << std::endl;
	 
	}
	std::cout << std::endl << std::endl;
	int *scorePtr;
	scorePtr = &scores[0];
	 
	 std::cout << "the address of the array[0]: " << *scorePtr << std::endl;
	 std::cout << "the deferenced pointer: " <<scorePtr << std::endl;
	 std::cout << std::endl << std::endl;
	 
	 int numBytes = sizeof(scores);	
	 std::cout << "The number of bytes of the array is: " << numBytes << std::endl;
	 
	 return 0;
}
