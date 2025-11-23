#include <iostream>
#include <cstring>
#include <cctype>

int main () {
	char ch = 'A';
	std::cout << "Before: " << ch << "\n";
	ch = tolower(ch);
	std::cout << "After: " << ch <<std::endl;
	
	
	std::cout << std::endl;
	char cha;
	std::cout << "Enter a letter: " ;
	std::cin >> cha;
	if (isalpha(ch))
		std::cout << cha << " is an alphabet\n";
	else
		std::cout << cha << "  is not an alphabet\n";
		
		
	

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
}
