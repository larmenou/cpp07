/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:06:40 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/21 08:18:32 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> a(5);
	Array<int> b(a);
	Array<int> c = b;
	
	std::cout << "a.size() = " << a.size() << std::endl;
	std::cout << "a[2] = " << a[2] << std::endl;

	std::cout << std::endl;

	std::cout << "b.size() = " << b.size() << std::endl;
	std::cout << "b[0] = " << b[0] << std::endl;

	std::cout << std::endl;

	std::cout << "c.size() = " << c.size() << std::endl;
	std::cout << "c[0] = " << c[0] << std::endl;

	std::cout << std::endl;

	try
	{
		std::cout << "Access b[-2]: throws exception" << std::endl;
		std::cout << b[-2] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "Access b[10]: throws exception" << std::endl;
		std::cout << b[10] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	Array<int> tab(10);
	for (unsigned int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			tab[i] = i * 2;
		}
		else
		{
			tab[i] = -i * 2;
		}
	}

	std::cout << "tab.size() = " << tab.size() << std::endl;

	for (unsigned int i = 0; i < 10; i++)
	{
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	}
	
	std::cout << std::endl;
	
	try
	{
		std::cout << "Access tab[10]: throws exception" << std::endl;
		std::cout << tab[10] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Access tab[-1]: throws exception" << std::endl;
		std::cout << tab[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

/* #include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
} */