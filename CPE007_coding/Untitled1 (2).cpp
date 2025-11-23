#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main() {
    int choice;
    float radius, length, width, base, height, side, area;
    char again;

    cout << fixed << setprecision(2); 

    do {
        
        cout << "\n--- Area Computation Menu ---\n";
        cout << "(1) Area of Circle\n";
        cout << "(2) Area of Rectangle\n";
        cout << "(3) Area of Triangle\n";
        cout << "(4) Area of Square (feet)\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                cin >> radius;
                area = M_PI * radius * radius;
                cout << "Area of circle = " << area << " square units.\n";
                break;

            case 2:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                area = length * width;
                cout << "Area of rectangle = " << area << " square units.\n";
                break;

            case 3:
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                area = 0.5 * base * height;
                cout << "Area of triangle = " << area << " square units.\n";
                break;

            case 4:
                cout << "Enter side length in feet: ";
                cin >> side;
                area = side * side;
                cout << "Area of square = " << area << " square feet.\n";
                break;

            default:
                cout << "Invalid choice. Please choose between 1 and 4.\n";
        }

        cout << "\nDo you want to compute another area? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\nThank you for using the Area Calculator. Goodbye!\n";
    return 0;
}
