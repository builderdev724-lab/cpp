#include <iostream>

int main() {
    std::cout << "  ==========================   " << std::endl;
    std::cout << "      Devlopers Tools          " << std::endl;
    std::cout << "  ==========================   " << std::endl;

    std::cout << "1. Age Calculator" << std::endl;
    std::cout << "2. Calculator" << std::endl;
    std::cout << "3. Table Generator" << std::endl;
    std::cout << "4. Exit" << std::endl;

    char choice;

    std::cin >> choice;
    std::cout << "You selected: " << choice << std::endl;
    while (true) {
        if (choice == '1') {
            std::cout << "Age Calculator" << std::endl;

            int age;
            std::cin >> age;
            std::cout << "Your age is: " << age << std::endl;
            
        } else if (choice == '2') {
            std::cout << "Calculator" << std::endl;

            
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
            
        } else if (choice == '3') {
            std::cout << "Table Generator" << std::endl;

            int num;
        
            std::cout << "Multiplication Table Generator" << std::endl;
            std::cout << "Enter a number: ";
            std::cin >> num;
        
            for (int i=1; i<=10; i++) {
                std::cout << num << " x " << i << " = " << num*i << std::endl;
            }
            
        } else if (choice == '4') {
            std::cout << "Exit" << std::endl;
            break;
        }
        else {
            if (choice != '1' && choice != '2' && choice != '3' && choice != '4') {
                std::cout << "Invalid choice" << std::endl;
            }
        }

        std::cin >> choice;
    }

    
    return 0;
}
