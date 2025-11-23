#include <iostream>
using namespace std;

int main() {
    float physics, biology, math;
    float average;
    char grade;

    // Input marks
    cout << "Enter marks for Physics: ";
    cin >> physics;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    cout << "Enter marks for Math: ";
    cin >> math;

    // Calculate average percentage
    average = (physics + biology + math) / 3;

    // Determine grade using switch
    int percentBracket = static_cast<int>(average) / 10;

    switch (percentBracket) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
        case 4:
            grade = 'E';
            break;
        default:
            grade = 'F';
    }

    // Display output
    cout << "\nPhysics\t\t: " << physics << endl;
    cout << "Biology\t\t: " << biology << endl;
    cout << "Math\t\t: " << math << endl;
    cout << "-------------------" << endl;
    cout << "Average is\t: " << average << "%" << endl;
    cout << "Grade Level\t: " << grade << endl;

    return 0;
}
