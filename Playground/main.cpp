#include <iostream>

template< typename T >
T max(T a, T b) {
	return a > b ? a : b;
}

int main() {
	std::cout << max(2, 5) << ' ' << max(23.443, 4.4);
}