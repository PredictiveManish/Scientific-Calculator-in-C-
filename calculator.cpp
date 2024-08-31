#include <iostream>
#include <cmath>

using namespace std;

// Function to perform addition
double add(double num1, double num2) {
  return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
  return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
  return num1 * num2;
}

// Function to perform division
double divide(double num1, double num2) {
  if (num2 == 0) {
    cout << "Error: Division by zero!" << endl;
    return 0;
  }
  return num1 / num2;
}

// Function to perform exponentiation
double power(double num1, double num2) {
  return pow(num1, num2);
}

// Function to perform square root
double sqrtCalc(double num) {
  if (num < 0) {
    cout << "Error: Square root of negative number!" << endl;
    return 0;
  }
  return sqrt(num);
}

// Function to perform natural logarithm
double ln(double num) {
  if (num <= 0) {
    cout << "Error: Logarithm of non-positive number!" << endl;
    return 0;
  }
  return log(num);
}

// Function to perform base-10 logarithm
double log10Calc(double num) {
  if (num <= 0) {
    cout << "Error: Logarithm of non-positive number!" << endl;
    return 0;
  }
  return log10(num);
}

// Function to perform sine
double sinCalc(double num) {
  return sin(num * M_PI / 180);
}

// Function to perform cosine
double cosCalc(double num) {
  return cos(num * M_PI / 180);
}

// Function to perform tangent
double tanCalc(double num) {
  return tan(num * M_PI / 180);
}

// Function to perform arcsine
double arcsin(double num) {
  if (num < -1 || num > 1) {
    cout << "Error: Arcsine domain error!" << endl;
    return 0;
  }
  return asin(num) * 180 / M_PI;
}

// Function to perform arccosine
double arccos(double num) {
  if (num < -1 || num > 1) {
    cout << "Error: Arccosine domain error!" << endl;
    return 0;
  }
  return acos(num) * 180 / M_PI;
}

// Function to perform arctangent
double arctan(double num) {
  return atan(num) * 180 / M_PI;
}

// Function to perform hyperbolic sine
double sinhCalc(double num) {
  return sinh(num);
}

// Function to perform hyperbolic cosine
double coshCalc(double num) {
  return cosh(num);
}

// Function to perform hyperbolic tangent
double tanhCalc(double num) {
  return tanh(num);
}

// Function to perform modulus
double modulus(int num1, int num2) {
  if (num2 == 0) {
    cout << "Error: Division by zero in modulus!" << endl;
    return 0;
  }
  return num1 % num2;
}

// Function to calculate factorial
unsigned long long factorial(int num) {
  if (num < 0) {
    cout << "Error: Factorial of negative number!" << endl;
    return 0;
  }
  unsigned long long result = 1;
  for (int i = 1; i <= num; ++i) {
    result *= i;
  }
  return result;
}

int main() {
  char choice;
  double num1, num2;

  cout << "Scientific Calculator" << endl;
  cout << "---------------------" << endl;
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;
  cout << "5. Exponentiation" << endl;
  cout << "6. Square Root" << endl;
  cout << "7. Natural Logarithm" << endl;
  cout << "8. Base-10 Logarithm" << endl;
  cout << "9. Sine" << endl;
  cout << "10. Cosine" << endl;
  cout << "11. Tangent" << endl;
  cout << "12. Arcsine" << endl;
  cout << "13. Arccosine" << endl;
  cout << "14. Arctangent" << endl;
  cout << "15. Hyperbolic Sine" << endl;
  cout << "16. Hyperbolic Cosine" << endl;
  cout << "17. Hyperbolic Tangent" << endl;
  cout << "18. Modulus" << endl;
  cout << "19. Factorial" << endl;
  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice) {
    case '1':
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
      cout << "Result: " << add(num1, num2) << endl;
      break;
    case '2':
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
      cout << "Result: " << subtract(num1, num2) << endl;
      break;
    case '3':
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
      cout << "Result: " << multiply(num1, num2) << endl;
      break;
    case '4':
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
      cout << "Result: " << divide(num1, num2) << endl;
      break;
    case '5':
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
      cout << "Result: " << power(num1, num2) << endl;
      break;
    case '6':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << sqrtCalc(num1) << endl;
      break;
    case '7':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << ln(num1) << endl;
      break;
    case '8':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << log10Calc(num1) << endl;
      break;
    case '9':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << sinCalc(num1) << endl;
      break;
    case '10':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << cosCalc(num1) << endl;
      break;
    case '11':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << tanCalc(num1) << endl;
      break;
    case '12':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << arcsin(num1) << endl;
      break;
    case '13':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << arccos(num1) << endl;
      break;
    case '14':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << arctan(num1) << endl;
      break;
    case '15':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << sinhCalc(num1) << endl;
      break;
    case '16':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << coshCalc(num1) << endl;
      break;
    case '17':
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Result: " << tanhCalc(num1) << endl;
      break;
    case '18':
      int intNum1, intNum2;
      cout << "Enter two integers: ";
      cin >> intNum1 >> intNum2;
      cout << "Result: " << modulus(intNum1, intNum2) << endl;
      break;
    case '19':
      int factNum;
      cout << "Enter an integer: ";
      cin >> factNum;
      cout << "Result: " << factorial(factNum) << endl;
      break;
    default:
      cout << "Invalid choice!" << endl;
      break;
  }

  return 0;
}