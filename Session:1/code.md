# Understanding the Code

## Include directive

`#include <iostream>`

This line imports standard input/output tools so the program can use `std::cout` and `std::cin`.

## Main function

`int main()`

This is where the program starts running.

Think of it like the main door:

* Program enters here
* Executes the statements inside
* Then exits when finished

Example:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello";
    return 0;
}
```

## What it means

* `std::cout` = console output
* `<< "Hello";` = print the text `Hello`
* `return 0;` = program finished successfully



## Introducing a variable 

**Integer is a data type that can store whole numbers**
int age = 20;

**Double is a data type that can store decimal numbers**
double height = 5.9;

**Text is stored in a data type called string**
std::string name = "Vinsmoke Kai";

**Boolean is a data type that can store true or false values**
bool isDeveloper = true;