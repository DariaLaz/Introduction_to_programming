#include <iostream>

bool isCapitalLetter(char S) {
    return (S >= 'A' && S <= 'Z');
}

bool checkSymbol(char S) {
    return (isCapitalLetter(S) || (S >= 'a' && S <= 'z'));
}

int main()
{
    std::cout << isCapitalLetter('S') << std::endl;
    std::cout << isCapitalLetter('s') << std::endl;
    std::cout << checkSymbol('s') << std::endl;
    std::cout << checkSymbol('!') << std::endl;
}