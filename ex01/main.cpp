/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:53:51 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/15 15:47:46 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tab[4] = {0, 1, 2, 3};
	float tabf[7] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
	std::string str[5] = {"Bonjour", ", ", "comment ", "ca ", "va ?"};

	std::cout << "\x1B[33mPrint 0 1 2 3 and add 1 for each of them\033[0m" << std::endl;
	iter(tab, 4, &printIter);
	iter(tab, 4, &add);
	std::cout << "\x1B[33mPrint after add\033[0m" << std::endl;
	iter(tab, 4, &printIter);

	std::cout << std::endl;
	
	std::cout << "\x1B[33mPrint 'Bonjour, comment ca va ?'\033[0m" << std::endl;
	iter(str, 5, &printIter);
	std::cout << "\x1B[33mFind if there is an 'o' in the str\033[0m" << std::endl;
	std::cout << "\x1B[33mShould print : true, false, true, false, false\033[0m" << std::endl;
	iter(str, 5, &isThereOCharHere);

	std::cout << std::endl;
	
	std::cout << "\x1B[33mPrint 0 1 2 3 4 5 6 and add 1 four times for each of them\033[0m" << std::endl;
	iter(tabf, 7, &printIter);
	iter(tabf, 7, &add);
	iter(tabf, 7, &add);
	iter(tabf, 7, &add);
	iter(tabf, 7, &add);
	std::cout << "\x1B[33mPrint after add\033[0m" << std::endl;
	iter(tabf, 7, &printIter);
	std::cout << "\x1B[33mIf number is lower than 7 print true\033[0m" << std::endl;
	std::cout << "\x1B[33mShould print true true true false false false false\033[0m" << std::endl;
	iter(tabf, 7, &lowerThanSeven);
	
	return 0;
}