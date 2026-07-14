#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "\n--- Results ---" << endl;
    cout << "Addition (add): " << (a + b) << endl;
    cout << "Subtraction (sub): " << (a - b) << endl;
    cout << "Multiplication (mult): " << (a * b) << endl;
    if (b != 0) {
 cout << "Division (div): " << (double)a / b << endl;
        cout << "Modulo (mod): " << (a % b) << endl;
    } else {
        cout << "Division and Modulo by zero are not defined." << endl;
    }
