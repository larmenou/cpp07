/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:53:48 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/15 15:47:59 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
void iter(T* tab, unsigned int const len, void (*f)(T*))
{
	for (unsigned int i = 0; i < len; i++)
	{
		(*f)(&tab[i]);
	}
}

template<typename T>
void printIter(T *tab)
{
	std::cout << *tab << std::endl;
}

template<typename T>
void add(T *tab)
{
	(*tab)++;
}

template<typename T>
void isThereOCharHere(T *tab)
{
	if (tab->find('o') != std::string::npos)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}

template<typename T>
void lowerThanSeven(T *tab)
{
	if (*tab < 7)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}