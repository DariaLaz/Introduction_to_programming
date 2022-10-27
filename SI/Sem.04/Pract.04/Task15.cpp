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

void factorisation(int num) {
	bool isFirst = true;
	for (int i = 2; i <= num; i++) {

		if (isPrime(i) && num % i == 0) {

			num /= i;
			
			if (!isFirst)
			{
				std::cout << ".";
			}
			isFirst = false;
			std::cout << i;

			i--;
		}
	}
}
int main()
{
	
}