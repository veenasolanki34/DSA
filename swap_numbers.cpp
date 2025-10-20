// With third variable
#include <iostream>

int main() {
    int a, b, temp;

    std::cout << "Enter valufor a: ";
    std::cin >> a;
    std::cout << "Enter value for b: ";
    std::cin >> b;

    std::cout << "The value before swapping is a: " << a << " and b: " << b << std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout << "The value after swapping is a: " << a << " and b: " << b;



    return 0;
}


// // Without third variable
// #include <iostream>
// using namespace std;

// int main()
// {
    
//     int a = 5, b = 10;

//     cout << "Before swapping." << endl;
//     cout << "a = " << a << ", b = " << b << endl;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "\nAfter swapping." << endl;
//     cout << "a = " << a << ", b = " << b << endl;

//     return 0;
// }