#include <iostream>
#include <iomanip>

int main() {
    int responses[40] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
    int num[11] = {0};
    
    for (int i = 0; i < (responses[10]); ++1) {
    	num[responses[i]]++;
	}
    
    std::cout << "Response Summary: " << std::endl;


    for (int i = 0; i <= 10 ; i++) {
    	std::cout << " Response " << i << ":" << num[11] << "students" << std::endl;
	}


    return 0;
}
