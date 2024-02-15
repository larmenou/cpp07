/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:53:48 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/15 13:26:36 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
T const & max(T const & x, T const & y)
{
	if (x == y)
		return (y);
	return (x > y ? x : y);
}

template<typename T>
T const & min(T const & x, T const & y)
{
	if (x == y)
		return (y);
	return (x < y ? x : y);
}

template<typename T>
void swap(T & x, T & y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}