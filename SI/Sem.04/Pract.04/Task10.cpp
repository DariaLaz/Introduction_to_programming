#include <iostream>

int decimalToBinary(int decimalNum) {
    int binaryNum = 0;

	int lenghtOfNums = 0;
	int copyDecimal = decimalNum;

	while (copyDecimal != 0)
	{
		lenghtOfNums++;
		copyDecimal /= 10;
	}

	int multiplier = 1;
	while (decimalNum != 0)
	{
		binaryNum += (decimalNum % 2) * multiplier;
		multiplier *= 10;
		decimalNum /= 2;
	}

	return binaryNum;
}

int main()
{
	std::cout << decimalToBinary(100);
}