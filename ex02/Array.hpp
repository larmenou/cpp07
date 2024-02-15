/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:06:31 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/15 17:14:06 by larmenou         ###   ########.fr       */
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
};

#include "Array.tpp"