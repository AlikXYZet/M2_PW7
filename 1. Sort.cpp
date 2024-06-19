#include "PW.h"



int main1()
{
	std::cout << "Инициализация первого int-массива с рандомным заполнением в диапазоне [0; 9):\n";
	std::array<int, 10> A1;

	// Генерация чисел в диапазоне [0; 1)
	std::generate(A1.begin(), A1.end(), []()
		{
			return rand() % 10;
		});

	// Вывод массива
	Print(A1);



	std::cout << "Инициализация второго int-массива с рандомным заполнением в диапазоне [0; 99):\n";
	std::array<int, 10> A2;

	// Генерация чисел в диапазоне [0; 1)
	std::generate(A2.begin(), A2.end(), []()
		{
			return rand() % 100;
		});

	// Вывод массива
	Print(A2);



	std::cout
		<< "Копирование первых 5 элементов сортировонного первого массива\n"
		<< "во второй ( std::partial_sort_copy ):\n";

	std::partial_sort_copy(A1.begin(), A1.end(), A2.begin(), A2.begin() + 5);

	// Вывод массива
	Print(A2);

	return 0;
}