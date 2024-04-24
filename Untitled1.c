#include <iostream>

using namespace std;


void displayMenu();
int addition;
int a,int b;
int subtraction;
int a, int b;
int multiplication;
int a, int b;
double division;
int a, int b;
int main() {
    int a, b;
    do {
        displayMenu();
            cout << "Enter your choice: ";
        int operation;
        cin >> operation;

        cout << "Enter two integers: ";
        cin >> a>> b;

        switch (operation) {
            case 1:
                cout << "Result: " << addition(a, b) << endl;
                break;
            case 2:
                cout << "Result: " << subtraction(a, b) << endl;
                break;
            case 3:
                cout << "Result: " << multiplication(a, b) << endl;
                break;
            case 4:
                if (b == 0)
                    cout << "The second integer is zero, divide by zero" << endl;
                else
                    cout << "Result: " << division(a, b) << endl;
                break;
            default:
                cout << "choice not valide!" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> values of your choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}


void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
}


int addition(int a, int b) {
    return a + b;
}


int subtraction(int a, int b) {
    return a - b;
}


int multiplication(int a, int b) {
    return num1 * num2;

double division(int a, int b) {
    return 0;
}

