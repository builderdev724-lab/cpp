#include <iostream>
int main() {
    int score;

    std::cout << "Enter your score: ";
    std::cin >> score;
    std :: cout << "Your Score after add:       " << score + 10 << std::endl;
    std :: cout << "Your Score after subtract:  " << score - 10 << std::endl;
    std :: cout << "Your Score after multiply:  " << score * 10 << std::endl;
    std :: cout << "Your Score after divide:    " << score / 10 << std::endl;
    std :: cout << "Your Score after modulo:    " << score % 10 << std::endl;

    return 0;
}
