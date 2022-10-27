#include <iostream>

int calculate(int a, int b, char action) {
	switch (action)
	{
		//+-*/%
	case '+': return (a + b); break;
	case '-': return (a - b); break;
	case '*': return (a * b); break;
	case '/': return (a / b); break;
	case '%': return (a % b); break;
	}
}

int main()
{
    std::cout << calculate(11, 5, '+') << std::endl;
	std::cout << calculate(11, 5, '-') << std::endl;
	std::cout << calculate(11, 5, '*') << std::endl;
	std::cout << calculate(10, 5, '/') << std::endl;
	std::cout << calculate(11, 5, '%') << std::endl;
}
