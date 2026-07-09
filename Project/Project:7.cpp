// Function Calculator

#include <iostream>

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

int divide(int a, int b) { return a / b; }

int main() {

  std ::cout << "Calculator";

  int a, b;
  char op;

  while (true) {
    std ::cout << "Enter operator (+, -, *, /): ";
    std ::cin >> op;
    std ::cout << "Enter two numbers: ";
    std ::cin >> a >> b;
    int result = 0;
    switch (op) {
    case '+':
      result = add(a, b);
      break;
    case '-':
      result = subtract(a, b);
      break;
    case '*':
      result = multiply(a, b);
      break;
    case '/':
      result = divide(a, b);
      break;
    default:
      std ::cout << "Invalid operator\n";
      continue;
    }
    std ::cout << "Result: " << result << '\n';
    std ::cout << "Do you want to continue? (y/n): ";
    char choice;
    std ::cin >> choice;
    if (choice != 'y')
      break;
  }

  return 0;
}
