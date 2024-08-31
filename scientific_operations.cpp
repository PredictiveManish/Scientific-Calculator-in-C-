#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double value);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);

// Basic arithmetic operations
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        throw std::invalid_argument("Division by zero");
    }
}

// Advanced mathematical operations
double power(double base, double exponent) {
    return std::pow(base, exponent);
}

double squareRoot(double value) {
    return std::sqrt(value);
}

double sine(double angle) {
    return std::sin(angle);
}

double cosine(double angle) {
    return std::cos(angle);
}

double tangent(double angle) {
    return std::tan(angle);
}

// Main function
int main() {
    int choice;
    double num1, num2;

    do {
        // Display menu
        cout << "Select operation:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                try {
                    cout << "Result: " << divide(num1, num2) << endl;
                } catch (std::invalid_argument& e) {
                    cerr << e.what() << endl;
                }
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << squareRoot(num1) << endl;
                break;
            case 7:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << sine(num1) << endl;
                break;
            case 8:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << cosine(num1) << endl;
                break;
            case 9:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                cout << "Result: " << tangent(num1) << endl;
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
