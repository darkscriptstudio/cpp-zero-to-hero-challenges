#include <iostream>  // Required for input/output operations
using namespace std; // Use the standard namespace for cin, cout, etc.

int main() {
    float num1, num2;  // Declare two float variables to store user input

    // Ask the user to enter the first number
    cout << "Enter your first number: ";
    cin >> num1;  // Take input and store it in num1

    // Ask the user to enter the second number
    cout << "Enter your second number: ";
    cin >> num2;  // Take input and store it in num2

    cout << endl; // Print a blank line for better output formatting

    // Perform and display the results of arithmetic operations
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; // Addition
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl; // Subtraction
    cout << num1 << " × " << num2 << " = " << num1 * num2 << endl; // Multiplication
    cout << num1 << " ÷ " << num2 << " = " << num1 / num2 << endl; // Division

    return 0; // Indicate that the program ended successfully
}