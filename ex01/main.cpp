/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:53:51 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/21 08:15:04 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tab[4] = {0, 1, 2, 3};
	float tabf[7] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
	std::string str[5] = {"Bonjour", ", ", "comment ", "ca ", "va ?"};
	char tabc[3] = {'a', 'b', 'c'};

	std::cout << "\x1B[33mPrint 0 1 2 3\033[0m" << std::endl;
	iter(tab, 4, printIter);

	std::cout << std::endl;
	
	std::cout << "\x1B[33mPrint 'Bonjour, comment ca va ?'\033[0m" << std::endl;
	iter(str, 5, &printIter);
	std::cout << "\x1B[33mFind if there is an 'o' in the str\033[0m" << std::endl;
	std::cout << "\x1B[33mShould print : true, false, true, false, false\033[0m" << std::endl;
	iter(str, 5, &isThereOCharHere);

	std::cout << std::endl;
	
	std::cout << "\x1B[33mPrint 0 1 2 3 4 5 6\033[0m" << std::endl;
	iter(tabf, 7, &printIter);
	std::cout << "\x1B[33mIf number is lower than 7 print true\033[0m" << std::endl;
	std::cout << "\x1B[33mShould print true true true true true true true\033[0m" << std::endl;
	iter(tabf, 7, &lowerThanSeven);

	std::cout << std::endl;

	std::cout << "\x1B[33mPrint a b c\033[0m" << std::endl;
	iter(tabc, 3, &printIter);
	
	return 0;
}


/* class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print );
  iter( tab2, 5, print );

  return 0;
} */