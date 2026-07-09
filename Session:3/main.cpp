#include <iostream>

int main() {
    // Loop
    // for, while, do-while

    std::cout << " For loop "<<std::endl;
    
    // for loop
    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    std::cout << " While loop "<<std::endl;

    // while loop
    int j = 0;
    while (j < 10) {
        std::cout << j << std::endl;
        j++;
    }

    std::cout << " Do-while loop "<<std::endl;

    // do-while loop
    int k = 0;
    do {
        std::cout << k << std::endl;
        k++;
    } while (k < 10);
    
    return 0;
}