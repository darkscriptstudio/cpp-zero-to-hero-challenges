#include <iostream>  // Includes the input-output stream library
using namespace std; // Allows use of standard namespace (e.g., cout, cin)

int main() {
    int num1, num2;  // Declare two integer variables to store user input

    // 💡 Note: If you want to perform addition with decimal numbers,
    // you can use 'float' or 'double' instead of 'int'.
    // Example: float num1, num2;

    // Display a welcome message to the user
    cout << "Hey there! Welcome to our sum program" << endl;

    // Ask the user to enter the first number
    cout << "Enter your first number: ";
    cin >> num1;  // Take input and store in num1

    // Ask the user to enter the second number
    cout << "Enter your second number: ";
    cin >> num2;  // Take input and store in num2

    cout << endl;  // Print a blank line for better formatting

    // Calculate the sum of the two numbers and store in 'result'
    int result = num1 + num2;

    // Display the formatted result to the user
    cout << num1 << " + " << num2 << " = " << result << endl;

    return 0;  // Return 0 to indicate successful program termination
}