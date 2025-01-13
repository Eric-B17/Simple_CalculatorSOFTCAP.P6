#include <iostream>
#include <iomanip>

int main() {
    int num1;
    std::cout << "Enter a number: ";
    std::cin >> num1;
    int num2;
    std::cout << "Enter another number";
    std::cin >> num2;

    int add = num1 + num2;
    int min = num1 - num2;
    int mult = num1 * num2;
    int div = num1/num2;

    if (num2 == 0) {
        div = 0;
    }

    std::cout << "The result of these numbers adding are" << "" << add << std::endl;
    std::cout << "The result of these numbers minusing are" << "" << min << std::endl;
    std::cout << "The result of these numbers multiplyimng are" << "" << mult << std::endl;
    std::cout << "The result of these numbers dividing are" << " " << div << std::endl;

    return 0;
}