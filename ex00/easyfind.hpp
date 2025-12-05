/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/05 16:34:30 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"
#include "string"



template <typename T>
T* easyfind(T container, int needle)
{
	try{
	for(unsigned int i = 0; i < MAX_INT; i++)
	{
		if( container[i] == needle)
			return container[i];
	}
	}
	catch {
		throw std::out_of_range
	}
}

template <typename T>
unsigned int maxsize(T container)
{
	for( unsigned int )
}



#include "easyfind.tpp"