/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:38 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/09 16:39:21 by poverbec         ###   ########.fr       */
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
	// 

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::begin()
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::end()
{
	return this->c.rend();
}	

// last in / first out 
//template <typename T>
//T MutantStack<T>::top()
//{
//	return (_stack.front());
//}



//template <typename T>
//void MutantStack<T>::push( T nbr)
//{
//	if(_stack.size() == 0 )
//	{
//		_stack.push_back(nbr);
//		return ;
//	}
//	_stack.resize(_stack.size() + 1)
//	for(unsigned int i = _stack.size(); i > 0; i--)
//	{
//		_stack[i].swap(_stack[i -1])
//	}
//	_stack.insert(_stack.begin(), nbr);
//	for(unsigned int i = 0; i < _stack.size(); i++)
//	{
//		_stack[i].erase(_iterator);
//		_stack[i]._iterator++;
		
//	}
	
	
//}

// 0
// 0


// 5
// 10
//2

