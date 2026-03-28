#include <iostream>
#include <cstdlib>

double pow(double value, int power, double result = 1.0) {
	for (int i{}; i < power; ++i) {
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
	
	return result;
}

int main() {
	setlocale(LC_ALL, "RU");

	pow(5.11, 2);
	pow(3.6, 3);
	pow(4.3, 4);

	return EXIT_SUCCESS;
}
