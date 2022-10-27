#include <iostream>

bool isInRange(int num, int min, int max) {
	if (num >= min && num <= max)
	{
		return true;
	}
	return false;
}

int askUser(int from, int to) {
	int num;
	do
	{
		std::cin >> num;
	} while (isInRange(num, from, to));
	return num;
}

int main()
{
    std::cout << "Hello World!\n";
}