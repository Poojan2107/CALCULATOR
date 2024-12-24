#include <iostream>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void modulusOperation(); 

int main() {
    int choice;

    do {
        cout << "Press 1 for +\n";
        cout << "Press 2 for -\n";
        cout << "Press 3 for *\n";
        cout << "Press 4 for /\n";
        cout << "Press 5 for %\n";
        cout << "Press 0 for exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulusOperation(); 
                break;
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}

void addition() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a + b << endl;
}

void subtraction() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a - b << endl;
}

void multiplication() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a * b << endl;
}

void division() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b != 0)
        cout << "Result: " << (float)a / b << endl;
    else
        cout << "Error: Division by zero is undefined.\n";
}

void modulusOperation() { 
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a % b << endl;
}
