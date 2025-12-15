/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:38 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/15 13:03:41 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <exception>
#include <algorithm>
#include <iterator>
#include <vector>

#include "MutantStack.hpp"


template <typename T>
MutantStack<T>::MutantStack()
{
};
template <typename T>
MutantStack<T>::~MutantStack()
{
};
template <typename T>
MutantStack<T>::MutantStack( const MutantStack &object) :std::stack<T>(object)
{
};

template <typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack &object)
{
	if(this != &object)
	{
		std::stack<T>::operator=(object);
	}
	return *this;
}
	// 

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}