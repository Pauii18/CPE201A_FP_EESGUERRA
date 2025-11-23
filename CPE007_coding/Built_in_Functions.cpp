#include <iostream>
#include <cmath> // Required for sqrt function

// Function to compute the volume of a cube
double volOfCub(double side) {
    return side * side * side;
}

// Function to calculate the length of the hypotenuse
double hypotenuse(double side1, double side2) {
    return std::sqrt((side1 * side1) + (side2 * side2));
}

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheitTemp) {
    return (fahrenheitTemp - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
double fahrenheit(double celsiusTemp) {
    return (celsiusTemp * 9 / 5) + 32;
}

int main() {
    // Volume of Cube
    std::cout << "--- Cube Volume Calculation ---" << std::endl;
    
	double cubeSide = 5.0;
    std::cout << "Side length: " << cubeSide << " units" << std::endl;
    std::cout << "Volume of cube: " << volOfCub(cubeSide) << " cubic units" << std::endl << std::endl;

    // Hypotenuse Calculation
    std::cout << "--- Hypotenuse Calculation ---" << std::endl;
    double triangle1Side1 = 3.0, triangle1Side2 = 4.0;
    std::cout << "Triangle 1 (sides " << triangle1Side1 << ", " << triangle1Side2 << "): Hypotenuse = "
              << hypotenuse(triangle1Side1, triangle1Side2) << std::endl;

    double triangle2Side1 = 5.0, triangle2Side2 = 12.0;
    std::cout << "Triangle 2 (sides " << triangle2Side1 << ", " << triangle2Side2 << "): Hypotenuse = "
              << hypotenuse(triangle2Side1, triangle2Side2) << std::endl;

    double triangle3Side1 = 8.0, triangle3Side2 = 15.0;
    std::cout << "Triangle 3 (sides " << triangle3Side1 << ", " << triangle3Side2 << "): Hypotenuse = "
              << hypotenuse(triangle3Side1, triangle3Side2) << std::endl << std::endl;

    // Temperature Conversion Charts
    std::cout << "--- Temperature Conversion Charts ---" << std::endl;

    // Celsius to Fahrenheit Chart
    std::cout << "\nCelsius to Fahrenheit:" << std::endl;
    std::cout << "Celsius\tFahrenheit" << std::endl;
    for (int c = 0; c <= 100; ++c) {
        std::cout << c << "\t" << fahrenheit(static_cast<double>(c)) << std::endl;
    }

    // Fahrenheit to Celsius Chart
    std::cout << "\nFahrenheit to Celsius:" << std::endl;
    std::cout << "Fahrenheit\tCelsius" << std::endl;
    for (int f = 32; f <= 212; ++f) {
        std::cout << f << "\t\t" << celsius(static_cast<double>(f)) << std::endl;
    }

    return 0;
}
