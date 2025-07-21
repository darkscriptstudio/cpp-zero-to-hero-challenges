// Commit: Calculate the area of a circle using radius input and constant PI.
// Note: Instead of (radius * radius), you can also use pow(radius, 2) from <cmath> for exponentiation.

#include <iostream>
#include <cmath>  // Required if using pow()
using namespace std;

int main() {
    float PI = 3.1416;
    float redius;

    cout << "Enter your circle redius: ";
    cin >> redius;

    // double area = PI * pow(redius, 2); // Alternative using pow()
    double area = PI * (redius * redius);  // Current method using multiplication

    cout << "The area of the circle is: " << area << endl;

    return 0;
}