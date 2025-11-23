#include <iostream>

int main () {
	
	int scores[10] = {37, 15, 22, 40, 87, 71, 24, 67, 400, 62 };
	int temp = scores[0];
	int n = 10;
	for (int i = 0; i < n -1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (scores [j] > scores [ j + 1 ]) {
				
				temp = scores [j];
				scores[j] = scores[j+1];
				scores[j+1] = temp;
			}
		}
	}
	
	std::cout << "Scores in ascending order: " ;
	for (int i = 0; i < n; i++) {
		std::cout << scores[i] << " ";
		
	}
	
	std::cout << std::endl;
	
	return 0;
}

