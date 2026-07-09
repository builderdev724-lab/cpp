#include <iostream>

int main() {

    int math;
    int science;
    int history;

    std::cout << "Math: ";
    std::cin >> math;

    std::cout << "Science: ";
    std::cin >> science;

    std::cout << "History: ";
    std::cin >> history;

    int obtained = math + science + history;
    std::cout << "Obtained: " << obtained << std::endl;

    double average = obtained / 3.0;
    double percentage = (obtained * 100.0) / 300;

    std::cout << "\nAverage: " << average << std::endl;
    std::cout << "Percentage: " << percentage << "%" << std::endl;

    return 0;
}