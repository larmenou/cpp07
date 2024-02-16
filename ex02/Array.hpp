/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baloo <baloo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:06:31 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/16 12:10:27 by baloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class Array
{
	private:
		T* _array;
		unsigned int _length;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const & copy);
		Array const & operator=(Array const & copy);
		~Array();

		T& operator[](std::size_t idx);
		unsigned int size() const;

		class OutOfBoundsException : public std::exception
		{
			const char * what() const throw()
			{
				return ("Index out of bounds");
			}
		};
};

#include "Array.tpp"