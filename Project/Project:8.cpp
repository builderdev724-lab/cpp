#include <iostream>

void ageChecker()
{
    int age;

    std::cout << "Enter Age: ";
    std::cin >> age;

    if(age >= 18)
    {
        std::cout << "Adult\n";
    }
    else
    {
        std::cout << "Minor\n";
    }
}

int main() {

    ageChecker();
  return 0;
}
