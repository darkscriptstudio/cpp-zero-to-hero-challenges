#include <iostream>  // Header file for input/output operations
using namespace std; // Use the standard namespace for cin, cout, etc.

int main() {
    int birth_year, age;  // Declare variables for birth year and age

    // Ask the user to enter their birth year
    cout << "Enter your birth year: ";
    
    // Take input from user
    cin >> birth_year;
    
    // Calculate age by subtracting birth year from the current year
    // Note: 2025 - birth_year (not the other way)
    age = 2025 - birth_year; 
    
    // Display the calculated age
    cout << "You’re " << age << " years old.";

    return 0;  // Return 0 to indicate successful program execution
}