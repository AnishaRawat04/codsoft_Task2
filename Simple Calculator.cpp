//***********************************************SIMPLE CALCULATOR*************************************************
#include <iostream>
#include <limits>

using namespace std;

int main() {
    char choice;
    double num1, num2, result;
    char operation;

     cout<<endl<<endl;
     cout << "***************Simple Calculator***************" << endl;
    
    do {
        cout << "\nEnter the first number: ";
        cin >> num1;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the characters in buffer until a newline charatcter occurs

            cout << "Invalid input. Please enter a valid number: ";
            cin >> num1;
        }

        cout << "Enter an operation (+, -, *, /): ";
        cin >> operation;

        while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            cout << "Invalid operation. Please enter from (+, -, *,/): ";
            cin >> operation;
        }

        cout << "Enter the second number: ";
        cin >> num2;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the characters in buffer until a newline charatcter occurs
            cout << "Invalid input. Please enter a valid number: ";
            cin >> num2;
        }

       switch (operation) {
                case '+':
                    result = num1 + num2;
                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                    break;
                case '-':
                    result = num1 - num2;
                    cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                    break;
                case '*':
                    result = num1 * num2;
                    cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                    break;
                case '/':
                     if (num2 == 0) {
                     cout << "Error: Division by zero is not allowed." << endl;
                     } 
                     else {
                       result = num1 / num2;
                       cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                     break;
            }
        }

        cout << "\nDo you want to perform another calculation? (Y/N): ";
        cin >> choice;
    
    } while (choice == 'Y' || choice == 'y');
    
    cout << "\n****************GOODBYE!! Thank you for using the calculator****************" << endl;

    return 0;
}
