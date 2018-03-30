
#include <iostream>
#include <random>

int main() {

	/* inicializa la generación de números aleatorios */
	srand(time(NULL));

	std::cout << "Aleatorios" << std::endl
			  << "[0..2147483647]\t[0..50]\t[10..15]" << std::endl;

	for (int i = 0; i < 10; i++) {

		/* entero aleatorio entre 0 y 2147483647 */
		int aleatorio = rand();
		std::cout << aleatorio << '\t';

		/* reduce el rango a 0..49 */
		int aleatorioEntre0y49 = (aleatorio % 50);
		std::cout << aleatorioEntre0y49 << '\t';

		/* reduce el rango a 0..5 y luego lo traslada entre 10 y 15 */
		int aleatorioEntre10y15 = (aleatorio % 6) + 10;
		std::cout << aleatorioEntre10y15 << std::endl;
	}

	return 0;
}
