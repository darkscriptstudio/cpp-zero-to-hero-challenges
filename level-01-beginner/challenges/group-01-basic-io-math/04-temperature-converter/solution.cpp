#include <iostream>  // Required for input/output operations
using namespace std; // Use the standard namespace to avoid std:: prefix

int main() {
    float celsius, fahrenheit;  // Declare variables to store temperatures in Celsius and Fahrenheit

    // Ask the user to enter the temperature in Celsius
    cout << "Enter the temperature (Celsius): ";
    cin >> celsius;  // Take input and store it in 'celsius'

    // Convert Celsius to Fahrenheit using the formula: (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the converted temperature
    cout << "Temperature (Fahrenheit): " << fahrenheit << endl;

    return 0; // Return 0 to indicate successful execution
}

// Key Formula reminder
// fahrenheit = (celsius * 9 / 5) + 32;
// The bonus challenge is to convert a temperature from Fahrenheit to Celsius. 