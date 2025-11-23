#include <iostream>
int main () {
	float Physics;
	float Biology;
	float Math;
	int ave = 0;
	float total;
	float percent;
	char grade;
	
		
		std::cout << "Enter Physics Grade: " ; 
		std::cin >> Physics;
			
		std::cout << "Enter Biology Grade: ";
		std::cin >> Biology;
			
		std::cout << "Enter Math Grade: ";
		std::cin >> Math;
		std::cout << "-----------------------------" << std::endl;
			
	total = Physics + Biology + Math;
	percent = (total / 300) * 100;
	
	int category = static_cast<int>(percent / 10);
	
	switch (category) {
		case 1: 
		case 2:
			grade = 'A';
			break;
		case 3:
			grade = 'B';
			break;
		case 4:
			grade = 'C';
			break;
		case 5:
			grade = 'D';
			break;
		case 6:
		case 7:
			grade = 'E';
			break;
		default:
			grade = 'F';
			break;
	}
	
    std::cout << "\nPhysics : " << Physics << std::endl;
    std::cout << "Biology : " << Biology << std::endl;
    std::cout << "Math    : " << Math << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Average is : " << percent << std::endl;
    std::cout << "Grade Level: " << grade << std::endl;	
	
	return 0;
}
