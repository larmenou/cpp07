/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:33:46 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/19 11:41:19 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
Array<T>::Array()
{
	_length = 0;
	_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_length = n;
	_array = new T[n];
	for (unsigned int i = 0; i < _length; i++)
	{
		_array[i] = 0;
	}
}

template<typename T>
Array<T>::Array(Array const & copy)
{
	this->_array = new T[copy._length];
	this->_length = copy._length;
	for (unsigned int i = 0; i < copy._length; i++)
	{
		this->_array[i] = copy._array[i];
	}
}

template<typename T>
Array<T> const & Array<T>::operator=(Array const & copy)
{
	if (_array != NULL)
		delete [] this->_array;
	this->_array = new T[copy._length];
	this->_length = copy._length;
	for (unsigned int i = 0; i < copy._length; i++)
	{
		this->_array[i] = copy._array[i];
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	if (_array != NULL)
		delete[] _array;
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_length);
}

template<typename T>
T& Array<T>::operator[](std::size_t idx)
{
	if (idx >= _length)
		throw(OutOfBoundsException());
	else
		return (_array[idx]);
}