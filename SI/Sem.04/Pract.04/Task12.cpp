#include <iostream>
int nearestNum(int num) {
	
	int result = 1;
	while (abs(num - result) > abs(num - result * 2)) {
		result *= 2;
	}
	return result;
}
int main()
{
	int num;
	
	do {
		std::cin >> num;
	} while (100 > num || num > 100000);
	
	std::cout << nearestNum(num) << std::endl;
}