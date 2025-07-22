#include <iostream>  // Required for input and output operations
using namespace std; // To avoid writing std:: repeatedly

int main() {
    int num1, num2; // Declare two integer variables

    // Display welcome message
    cout << "Welcome to our basic calculator" << endl;

    // Input from the user
    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    // 💡 Basic arithmetic operations using the input values
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; // Addition
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl; // Subtraction
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl; // Multiplication

    // ⚠️ Note: Integer division will discard decimal part.
    // To see decimal output, use float or double:
    // Example: float num1, num2;

    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl; // Division
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl; // Modulus (remainder)

    return 0; // End of program
}