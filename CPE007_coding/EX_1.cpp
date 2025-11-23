#include <iostream> 

int main() {
	
    const int RESPONSE_SIZE = 40;
    int responses[RESPONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 
	7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    int frequency[11] = {0}; 

    for (int i = 0; i < RESPONSE_SIZE; ++i) {
        int current = responses[i];
       
        if (current >= 1 && current <= 10) {
            frequency[current]++;
        }
    }

    std::cout << "Response Summary:" << std::endl;

    for (int i = 1; i <= 10; ++i) {

        std::cout << "Response " << i << ": " << frequency[i] << " students" << std::endl;
    }

    return 0; 
}


