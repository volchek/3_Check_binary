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

	# Не надо дублировать код. Проверить работу функции Вы могли бы и в цикле:
	for (int i = 0; i < 9; ++i){
		checkBinary(i);
	}
	
	system("pause");
	return 0;
}
