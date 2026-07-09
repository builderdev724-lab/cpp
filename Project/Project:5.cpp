#include <iostream>

int main()
{
    int secretNumber = 6;
    int guess;

    std::cout << "=========================\n";
    std::cout << " Number Guessing Game\n";
    std::cout << "=========================\n";

    while (true)
    {
        std::cout << "\nEnter your guess: ";
        std::cin >> guess;

        if (guess == secretNumber)
        {
            std::cout << "Correct! You guessed the number.\n";
            break;
        }
        else
        {
            std::cout << "Wrong!\n";

            char choice;

            std::cout << "Try again? (y/n): ";
            std::cin >> choice;

            if (choice == 'n' || choice == 'N')
            {
                std::cout << "Game Over.\n";
                break;
            }
            else if (choice != 'y' && choice != 'Y')
            {
                std::cout << "Invalid choice. Exiting.\n";
                break;
            }
        }
    }

    return 0;
}