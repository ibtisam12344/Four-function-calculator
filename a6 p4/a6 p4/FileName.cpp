#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Error: Division by zero!" << endl;
        return 0; 
    }
}

int main() 
{
    char operation;
    int n1, n2;
    char choice;
    do {
        cout << "Enter number 1: ";
        cin >> n1;
        cout << "Enter the operation (+, -, *, /): ";
        cin >> operation;
        cout << "Enter number 2: ";
        cin >> n2;


        switch (operation) {
        case '+':
            cout << "Result: " << add(n1, n2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(n1, n2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(n1, n2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(n1, n2) << endl;
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
        }
        cout << "Do another (y/n)?" << endl;
        cin >> choice;
    } while (choice != 'n');
    return 0;
}
