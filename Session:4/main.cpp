// Functiona and code organization

#include <iostream>

// Function without parameter
void greet(){
    std::cout << "Hello, User\n" << std::endl;
}

// Function with parameter
void greets(std::string name) {
    std::cout << "Hello," << name << '\n';
}

// Return Value
int add(int a, int b) {
    return  a + b;
}

int main() {

    greet();
    greets("Priyojeet");
    int result = add(5, 5);
    std::cout << "Result: " << result << '\n';
    
    return 0;
}
