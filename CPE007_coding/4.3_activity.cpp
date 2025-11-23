#include <iostream>
#include <string>
#include <sstream>

// Function to convert a single string to an integer without a loop
// This version uses recursion to achieve a similar result as a loop
int stringToIntRecursive(const std::string& str, size_t index = 0) {
    if (index >= str.length()) {
        return 0; // Base case: end of string
    }

    // Convert character to integer value
    int digit = str[index] - '0';
    
    // Recursive step: process the rest of the string
    return digit + 10 * stringToIntRecursive(str, index + 1);
}

int main() {
    std::string s1, s2, s3, s4;

    std::cout << "Enter four integers, separated by spaces:" << std::endl;
    std::cin >> s1 >> s2 >> s3 >> s4;

    // Convert each string to an integer using a stringstream
    // This uses a different method for conversion, as requested
    std::stringstream ss1(s1);
    int n1;
    ss1 >> n1;

    std::stringstream ss2(s2);
    int n2;
    ss2 >> n2;

    std::stringstream ss3(s3);
    int n3;
    ss3 >> n3;

    std::stringstream ss4(s4);
    int n4;
    ss4 >> n4;

    // Calculate the sum
    int total_sum = n1 + n2 + n3 + n4;

    std::cout << "The total of the four values is: " << total_sum << std::endl;

    return 0;
}

