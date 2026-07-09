#include <iostream>
#include <string>

int main() {
    // By default, C++ prints booleans as 1 (true) or 0 (false).
    // std::boolalpha forces the console to print "true" or "false" text.
    std::cout << std::boolalpha;

    // ==========================================
    // PART 3: Comparison Operators
    // ==========================================
    std::cout << "--- Part 3: Comparison Operators ---\n";
    
    int age = 20;
    int passingGrade = 50;
    int studentGrade = 75;

    std::cout << "Is age equal to 20? (age == 20): " << (age == 20) << "\n";
    std::cout << "Is age not equal to 18? (age != 18): " << (age != 18) << "\n";
    std::cout << "Is grade greater than passing? (studentGrade > passingGrade): " << (studentGrade > passingGrade) << "\n";
    std::cout << "Is age less than 18? (age < 18): " << (age < 18) << "\n";
    std::cout << "Is age greater or equal to 18? (age >= 18): " << (age >= 18) << "\n";
    std::cout << "Is grade less or equal to 50? (studentGrade <= 50): " << (studentGrade <= 50) << "\n\n";

    // ==========================================
    // PART 4: Boolean Values
    // ==========================================
    std::cout << "--- Part 4: Boolean Values ---\n";
    
    bool isDeveloper = true;
    bool isStudent = false;

    std::cout << "isDeveloper: " << isDeveloper << "\n";
    std::cout << "isStudent: " << isStudent << "\n\n";

    // ==========================================
    // PART 5: Logical Operators
    // ==========================================
    std::cout << "--- Part 5: Logical Operators ---\n";

    // 1. AND (&&) - Both conditions must be true
    bool canWork = (age >= 18) && (age <= 60); 
    std::cout << "Can work (Age between 18 and 60): " << canWork << "\n";

    // 2. OR (||) - At least one condition must be true
    std::string country = "India";
    bool livesInSouthAsia = (country == "India") || (country == "Nepal");
    std::cout << "Lives in India or Nepal: " << livesInSouthAsia << "\n";

    // 3. NOT (!) - Reverses the result
    bool isNotStudent = !isStudent; // !false becomes true
    std::cout << "Is NOT a student (!isStudent): " << isNotStudent << "\n";

    return 0;
}