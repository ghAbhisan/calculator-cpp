#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 1; // Exit program with an error code
            }
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
            return 1; // Exit program with an error code
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}