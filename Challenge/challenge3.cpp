#include <iostream>
#include <string>

int main()
{
    std::string email;
    std::string password;

    std::cout << "=========================\n";
    std::cout << " Login System\n";
    std::cout << "=========================\n";

    for (int attempt = 1; attempt <= 3; attempt++)
    {
        std::cout << "\nAttempt "
                  << attempt
                  << " of 3\n";

        std::cout << "Email: ";
        std::cin >> email;

        std::cout << "Password: ";
        std::cin >> password;

        if (email == "test@mail.com" &&
            password == "12345678")
        {
            std::cout << "\nLogin Successful!\n";
            return 0;
        }

        std::cout << "\nInvalid Email or Password.\n";
    }

    std::cout << "\nAccount Locked.\n";

    return 0;
}