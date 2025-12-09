/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/09 17:50:21 by poverbec         ###   ########.fr       */
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
	
	MutantStack( const MutantStack &object);
	MutantStack& operator=( const MutantStack &object);
	
	// 
	//typedef typename std::stack<T>::container_type::iterator iterator;
	using iterator = typename std::stack<T>::container_type::iterator;
	
	iterator begin();
	iterator end();
	
};



#include "MutantStack.tpp"