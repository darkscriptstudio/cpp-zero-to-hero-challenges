#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

int main() {
    int num1, num2; // Declare two integer variables to store user inputs

    // Prompt the user to enter the first number
    cout << "Enter your first number: ";
    cin >> num1; // Read the first number from user input

    // Prompt the user to enter the second number
    cout << "Enter your second number: ";
    cin >> num2; // Read the second number from user input

    // Compare the two numbers
    if (num1 == num2) {
        // If both numbers are equal
        cout << "Both numbers are equal" << endl;
    } else if (num1 > num2) {
        // If the first number is greater than the second
        cout << num1 << " is greater than " << num2 << endl;
    } else {
        // If the second number is greater than the first
        cout << num2 << " is greater than " << num1 << endl;
    }

    return 0; // Exit the program
}