#include <iostream>

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;
    
    std::cout << "Enter an alphabet: " ;
    std::cin >> c;

    // Evaluates to 1(true) if c is a lowercase vowel
    isLowercaseVowel = ( c =='a' || c =='e' || c =='i' || c =='o' || c =='u');

    // Evaluates to 1(true) if c is a uppercase vowel
    isUppercaseVowel = ( c =='A' || c =='E' || c =='I' || c =='O' || c =='U');

    // Show error message if c is not an alphabet
    if(!isalpha(c))
        printf("Error! Non alphabetic character");
    else if (isLowercaseVowel||isUppercaseVowel)
        std::cout << c << " is a vowel.";
    else
        std::cout << c << " is a consonant.";



    return 0;
}