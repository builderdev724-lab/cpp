#include <iostream>
int main() {
    int age;

    std::cout << "Enter your age : ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Adult ";
    }
    else if (age >= 13) {
        std::cout << "Teenager ";
    }
    else {
        std::cout << "Minor ";
    }
    return 0;
}
