#include <iostream>

void showMenu()
{
    std::cout << "\n=== Menu ===" << std::endl;
    std::cout << "1. Age Checker" << std::endl;
    std::cout << "2. Calculator" << std::endl;
    std::cout << "3. Table Generator" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

void ageChecker()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "Invalid age." << std::endl;
    } else if (age < 18) {
        std::cout << "You are a minor." << std::endl;
    } else {
        std::cout << "You are an adult." << std::endl;
    }
}

void calculator()
{
    double a, b;
    char op;
    std::cout << "Enter expression (e.g. 3 + 4): ";
    std::cin >> a >> op >> b;

    switch (op) {
        case '+': std::cout << "Result: " << a + b << std::endl; break;
        case '-': std::cout << "Result: " << a - b << std::endl; break;
        case '*': std::cout << "Result: " << a * b << std::endl; break;
        case '/':
            if (b != 0) std::cout << "Result: " << a / b << std::endl;
            else std::cout << "Error: division by zero." << std::endl;
            break;
        default: std::cout << "Unknown operator." << std::endl;
    }
}

void tableGenerator()
{
    int num;
    std::cout << "Multiplication Table Generator" << std::endl;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 1; i <= 10; i++) {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }
}

int main()
{
    while (true)
    {
        showMenu();

        char choice;
        std::cin >> choice;

        if (choice == '1') {
            ageChecker();
        } else if (choice == '2') {
            calculator();
        } else if (choice == '3') {
            tableGenerator();
        } else if (choice == '4') {
            break;
        }
    }

    return 0;
}
