#include <iostream>
#include <string>

int main() {

    std:: cout << "========================================" << std::endl;
    std:: cout << "Devloper Profile" << std::endl;
    std:: cout << "========================================" << std::endl;

    std:: string name;
    std:: cout << "Name: ";
    std:: cin >> name;

    int age;
    std:: cout << "Age: ";
    std:: cin >> age;
    
    std:: string skill;
    std:: cout << "Enter Skill: ";
    std:: cin >> skill;

    std:: cout << "========================================" << std::endl;
    std:: cout << "Name: " << name << std::endl;
    std:: cout << "Age: " << age << std::endl;
    std:: cout << "Skill: " << skill << std::endl;

    return 0;
}