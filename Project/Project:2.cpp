#include <iostream>

int main() {

    int age = 18;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age < 18) {
        std::cout << "You are consider as a minor";
    }
    
    else {
        std::cout << "You are considered as an adult";
    }
    return 0;
}