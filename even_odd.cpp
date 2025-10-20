// Using if..else
#include <iostream>

int main() {
    int number;
    std::cout << "Enter number to check: ";
    std::cin >> number;

    if(number%2==0){
        std::cout << number << " is even";
    } else
    std::cout << number << " is odd";

    return 0;
}

// // Using ternary operator
// #include <iostream>

// int main() {
//     int number;

//     std::cout << "Enter number to check: ";
//     std::cin >> number;

//     ( number % 2 == 0) ? std::cout << number << " is even" : std::cout << number << " is odd.";


//     return 0;
// }