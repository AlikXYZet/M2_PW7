﻿#include "PW.h"

// Выбор демонстрации по умолчанию
int DefaultSelection = 1;
// Количество демонстраций
int MaxSelection = 3;

bool MainSelection(int& sel)
{
	switch (sel)
	{
	case 1:
		main1();
		break;

	case 2:
		main2();
		break;

	case 3:
		main3();
		break;

	default:
		std::cout << "Некорректный ввод. Выбор по умолчанию: "
			<< DefaultSelection
			<< '\n'
			<< std::endl;;
		return true;
		break;
	}

	return false;
}

int main()
{
	// Локализация
	setlocale(LC_ALL, "Russian");
	// <iomanip>: Выравнивание по левому краю
	std::cout << std::setiosflags(std::ios::left);
	// Использовать текущее время в качестве начального значения для генератора псевдослучайных чисел
	srand(time(0));

	std::cout << "Пример использования алгоритмов:\n"
		<< "1. std::partial_sort_copy — для массива, созданного при помощи generate;\n"
		<< "2. lower_bound, upper_bound, set::lower_bound, set::upper_bound — для целочисленного массива из 10 элементов;\n"
		<< "3. includes и set_difference — для поиска вхождения в сортированное множество другого (меньшего) сортированного множества и переноса отличающихся элементов соответственно.\n"
		<< '\n';

	std::cout << "Выбирите тестируемый алгоритм: ";
	int Selection;
	std::cin >> Selection;
	std::cout
		<< "=============================================================\n"
		<< std::endl;

	DefaultSelection = ((DefaultSelection - 1) % MaxSelection) + 1;

	if (MainSelection(Selection))
		MainSelection(DefaultSelection);

	return 0;
}