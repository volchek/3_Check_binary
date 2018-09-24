#include <iostream>


int checkBinary(const int n) {
	if (n == 1) {
		std::cout << "YES\n";
		return 0;
	}
	if (n % 2 || n < 1) {
		std::cout << "NO\n";
		return 0;
	}
	checkBinary((float)n / 2);


}

int main() {

	checkBinary(0);
	checkBinary(1);
	checkBinary(2);
	checkBinary(3);
	checkBinary(4);
	checkBinary(5);
	checkBinary(6);
	checkBinary(7);
	checkBinary(8);

	system("pause");
	return 0;
}
