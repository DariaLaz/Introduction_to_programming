﻿#include <iostream>

void print(char S, int N) {
	for (int i = 0; i < N; i++)
	{
		std::cout << S;
	}
}

int main()
{
	print('#', 5);
}
