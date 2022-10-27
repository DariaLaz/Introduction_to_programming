#include <iostream>

using namespace std;

int abs(int num) {
    return (num < 0 ? num * (-1) : num);
}
double fabs(double num) {
    return (num < 0 ? num * (-1) : num);
}

int main()
{
    std::cout << abs(-1) << std::endl;
    std::cout << abs(1) << std::endl;
    std::cout << fabs(-1) << std::endl;
    std::cout << fabs(1) << std::endl;
}
