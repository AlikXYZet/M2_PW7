#include "PW.h"



int main2()
{
	std::cout << "Инициализация int-массива с заполнением:\n";
	std::array<int, 10> AInt = { 1, 2, 3, 3, 3, 5, 5, 5, 6, 7 };
	std::array<int, 10>::iterator Ait_l, Ait_u;

	// Вывод массива
	Print(AInt);

	// Применение "lower_bound" и "upper_bound"
	Ait_l = std::lower_bound(AInt.begin(), AInt.end(), 3);
	std::cout
		<< "lower_bound – первый элемент условия \">= 3\": "
		<< *Ait_l
		<< '\n'
		<< "Заменим на 11 для выделения"
		<< '\n'
		<< std::endl;

	Ait_u = std::upper_bound(AInt.begin(), AInt.end(), 3);
	std::cout
		<< "upper_bound – первый элемент условия \"> 3\": "
		<< *Ait_u
		<< '\n'
		<< "Заменим на 22 для выделения"
		<< '\n'
		<< std::endl;

	*Ait_l = 11;
	*Ait_u = 22;

	std::cout << "Массив после изменения:\n";
	Print(AInt);

	std::cout << std::endl;




	std::cout << "-----------------------------------------------------------\n";

	std::cout << "Инициализация int-множества с заполнением от 0 до 9:\n";
	std::set<int> SInt;
	std::set<int>::iterator Sit_l, Sit_u;

	// Заполнение от 0 до 9
	for (int i = 0; i < 10; ++i)
		SInt.insert(SInt.end(), i);

	// Вывод массива
	Print(SInt);

	for (int8_t i = 0; i < 2; i++)
	{

		// Применение "set::lower_bound" и "set::upper_bound"
		Sit_l = SInt.lower_bound(5);
		std::cout
			<< "set::lower_bound – первый элемент условия \">= 5\": "
			<< *Sit_l
			<< "\n\n";

		Sit_u = SInt.upper_bound(5);
		std::cout
			<< "set::upper_bound – первый элемент условия \"> 5\": "
			<< *Sit_u
			<< "\n\n";

		std::cout << "Удаление данных элементов:\n";

		if (Sit_l != Sit_u)
			SInt.erase(Sit_l);
		SInt.erase(Sit_u);

		// Вывод массива
		Print(SInt);

		std::cout << std::endl;
	}

	return 0;
}