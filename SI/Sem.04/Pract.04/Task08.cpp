#include <iostream>

//Напишете функция pow(int num, unsigned N), която връща като резултат 
//числото num повдигнато на степен N, където N е строго положително.

int pow(int num, unsigned N) {
	unsigned int result = 1;
	for (int i = 0; i < N; i++)
	{
		result *= num;
	}
	return result;
}

int main()
{
    std::cout << pow(2, 3);
}