#include <iostream>


bool isPrime(int num) {

	int sqrtNum = sqrt(num);
	for (int i = 2; i <= sqrtNum; i++) {

		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
void printAllPrimeNums(int num) {
	for (int i = 2; i < num; i++)
	{
		if (isPrime(i))
		{
			std::cout << i << " ";
		}
	}
}

bool canNumBeSumOfPrimes(int num) {
	for (int i = 2; i < num / 2; i++)
	{
		if (isPrime(i) && isPrime(num - i))
		{
			return true;
		}
	}
	return false;
}


int main()
{
    std::cout << isPrime(56975) << std::endl;
	std::cout << "------------";
	printAllPrimeNums(97);
	std::cout << "------------" << std::endl;
	std::cout << canNumBeSumOfPrimes(13);
}