#include <iostream>
#include <string>

int main() {

    std:: cout << "------------------------------------" << std::endl;
    std:: cout << "Devloper Card" << std::endl;
    std:: cout << "------------------------------------" << std::endl;

    std:: string name;
    std:: cout << "Name: ";
    std:: cin >> name;

    int age;
    std:: cout << "Age: ";
    std:: cin >> age;

    std:: string language;
    std:: cout << "Programming Language: ";
    std:: cin >> language;

    std:: string dreamProject;
    std:: cout << "Dream Project: ";
    std:: cin >> dreamProject;

    std:: cout << "------------------------------------" << std::endl;
    std:: cout << "Name: " << name << std::endl;
    std:: cout << "Age: " << age << std::endl;
    std:: cout << "Programming Language: " << language << std::endl;   
    std:: cout << "Dream Project: " << dreamProject << std::endl;

    return 0;
}