#include "PW.h"



int main3()
{
	std::cout
		<< "Инициализация болшего int-множества из 8-ми элементов"
		<< "с рандомным заполнением в диапазоне [0; 9):\n";
	std::set<int> S_High;

	// Заполнение от 0 до 9
	while (S_High.size() < 8)
		S_High.insert(S_High.end(), rand() % 10);

	// Вывод массива
	Print(S_High);



	std::cout << "Инициализация малого int-множества с заполнением от 5 до 7:\n";
	std::set<int> S_Low;

	// Заполнение от 5 до 7
	for (int i = 5; i < 8; ++i)
		S_Low.insert(S_Low.end(), i);

	// Вывод массива
	Print(S_Low);



	// Применение std::includes
	std::cout << "Все элементы малого множества есть в большем:\n";
	if (std::includes(S_High.begin(), S_High.end(), S_Low.begin(), S_Low.end()))
		std::cout << "Да\n";
	else
		std::cout << "Нет\n";

	std::cout << std::endl;



	// Применение std::set_difference
	std::cout << "Все элементы большего множества с вычетанием элементов малого:\n";
	std::set<int> S_Mix;

	std::set_difference(
		S_High.begin(),
		S_High.end(),
		S_Low.begin(),
		S_Low.end(),
		std::inserter(S_Mix, S_Mix.begin()));

	// Вывод массива
	Print(S_Mix);

	S_Mix.clear();

	std::cout << "Все элементы малого множества с вычетанием элементов большего:\n";

	std::set_difference(
		S_Low.begin(),
		S_Low.end(),
		S_High.begin(),
		S_High.end(),
		std::inserter(S_Mix, S_Mix.begin()));

	// Вывод массива
	Print(S_Mix);

	std::cout << std::endl;

	return 0;
}