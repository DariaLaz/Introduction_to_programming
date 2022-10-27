#include <iostream>
int gcd(int a, int b) {

	if (a == 0 || b == 0) {
		return 0;
	}
	else if (a == b) {
		return a;
	}
	else if (a > b) {
		return gcd(a - b, b);
	}
	else {
		return gcd(a, b - a);
	}
}
int main()
{
	int a, b, c, d;

	std::cin >> a >> b >> c >> d;

	int abGcd = gcd(a, b);
	int cdGcd = gcd(c, d);

	int abcdGcd = gcd(abGcd, cdGcd);

	std::cout << "GCD(a, b) = " << abGcd << std::endl
			<< "GCD(c, d) = " << cdGcd << std::endl
			<< "GCD(a, b, c, d) = " << abcdGcd << std::endl;
}
