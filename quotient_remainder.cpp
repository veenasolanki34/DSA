#include <iostream>

int main() {
    int divisor, dividend, quotient, remainder;

    std::cout << "Enter dividend: ";
    std::cin >> dividend;

    std::cout << "Enter divisor: ";
    std::cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder;

    return 0;
}