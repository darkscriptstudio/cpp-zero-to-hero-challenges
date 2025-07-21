#include <iostream>  // Header file for input/output operations
using namespace std; // Allows use of standard namespace (like cout, cin) without prefix

int main() {
    int num;  // Variable to store the input number
    
    // Prompt the user to enter a number
    cout << "Enter the number to check if it is even or odd: ";
    
    // Read input from the user and store in 'num'
    cin >> num; 
    
    // Use modulus operator (%) to check if the number is divisible by 2
    if (num % 2 == 0) {
        // If the remainder is 0, the number is even
        cout << "Even" << endl;
    } else {
        // Otherwise, it's an odd number
        cout << "Odd" << endl;
    } 
    
    return 0; // End of the program
}