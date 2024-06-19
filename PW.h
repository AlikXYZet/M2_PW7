#pragma once

#include <algorithm>

#include <iomanip>
#include <string>
#include <iostream>

/*---   Предварительная инициализация   ---*/
// Функция вывода всех элементов контейнера в консоль
template<class T>
void print_list(T& L)
{
	std::cout << "{ ";
	std::for_each(L.begin(), L.end(), [](const T::value_type& elem)
		{
			std::cout << elem << ' ';
		});
	std::cout << "}\n" << std::endl;
}
//----------------------------------------------------------------------------------------------------

int main1();
int main2();
int main3();