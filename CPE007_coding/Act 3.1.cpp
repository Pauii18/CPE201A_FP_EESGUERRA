#include <iostream>
#include <iomanip>

const float cm_to_inch = 0.393701;
const float inch_to_cm = 2.54;
const float feet_to_meter = 0.3048;
const float meter_to_feet = 3.28084;

int main() {
    int choice;
    float inputValue, result;
    char again;

    std::cout << std::fixed << std::setprecision(4);

    do {
        std::cout << "\nConversion Menu:\n";
        std::cout << "(1) cm to inches\n";
        std::cout << "(2) inches to cm\n";
        std::cout << "(3) feet to meters\n";
        std::cout << "(4) meters to feet\n";
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value in centimeters: ";
                std::cin >> inputValue;
                result = inputValue * cm_to_inch;
                std::cout << inputValue << " cm = " << result << " inches\n";
                break;

            case 2:
                std::cout << "Enter value in inches: ";
                std::cin >> inputValue;
                result = inputValue * inch_to_cm;
                std::cout << inputValue << " inches = " << result << " cm\n";
                break;

            case 3:
                std::cout << "Enter value in feet: ";
                std::cin >> inputValue;
                result = inputValue * feet_to_meter;
                std::cout << inputValue << " feet = " << result << " meters\n";
                break;

            case 4:
                std::cout << "Enter value in meters: ";
                std::cin >> inputValue;
                result = inputValue * meter_to_feet;
                std::cout << inputValue << " meters = " << result << " feet\n";
                break;

            default:
                std::cout << "Invalid choice. Please select 1 to 4.\n";
                break;
        }

        std::cout << "\nDo you want to convert another? (Y/N): ";
        std::cin >> again;

    } while (again == 'Y' || again == 'y');

    std::cout << "Thank you for using the converter!\n";

    return 0;
}
