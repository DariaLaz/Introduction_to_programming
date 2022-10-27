#include <iostream>

int sumDigits(int num) {
    int sum = 0;
	while (num != 0)
	{
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}

int main()
{
	int num;
	std::cin >> num;
	while (num > 9)
	{
		num = sumDigits(num);
	}
    std::cout << num;
}
