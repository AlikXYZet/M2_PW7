#pragma once

#include <algorithm>

#include <iomanip>
#include <string>
#include <iostream>


/*---   Шаблон на проверку типа: Является ля контейнером   ---*/
template<typename, typename = void>
constexpr bool is_container = false;

template<typename T>
constexpr bool is_container<
	T,
	std::void_t<
	decltype(std::declval<T>().begin()),
	decltype(std::declval<T>().end()),
	typename T::value_type
	>
> = true;
//----------------------------------------------------------------------------------------------------


/*---   Предварительная инициализация   ---*/
// Функция вывода всех элементов контейнера в консоль
template<class T>					// Шаблон
std::enable_if_t <is_container<T>>	// Органичение использования по типу
print_list(T& L)
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