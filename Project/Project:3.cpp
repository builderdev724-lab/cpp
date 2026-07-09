#include <iostream>

int main() {

    int num1, num2;
    int choice;
    
    std::cout << "Calculator";

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter operation (1: Addition, 2: Subtraction, 3: Multiplication, 4: Division): ";
    std::cin >> choice;

    if (choice == 1) {
        int result = num1 + num2;
        std::cout << "Addition Result: " << result << std::endl;
    } else if (choice == 2) {
        int result = num1 - num2;
        std::cout << "Subtraction Result: " << result << std::endl;
    } else if (choice == 3) {
        int result = num1 * num2;
        std::cout << "Multiplication Result: " << result << std::endl;
    } else if (choice == 4) {
        int result = num1 / num2;
        std::cout << "Division Result: " << result << std::endl;
    }
     
    return 0;
}