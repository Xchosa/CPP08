/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/09 16:39:01 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <string>
#include <stack>



template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack();
	~MutantStack();
	// 
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	
	reverse_iterator begin();
	reverse_iterator end();
	
	//T top();
	//void push( T nbr);


	//template <typename T>
	//void push_back( T nbr);
};



#include "MutantStack.tpp"