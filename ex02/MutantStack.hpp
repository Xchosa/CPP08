/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/10 15:30:49 by poverbec         ###   ########.fr       */
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
	using const_iterator = typename std::stack<T>::container_type::const_iterator;
	using reverse_iterator = typename std::stack<T>::container_type::reverse_iterator;
	using const_reverse_iterator  = typename std::stack<T>::container_type::const_reverse_iterator;
	
	iterator begin();
	iterator end();
	const_iterator begin() const;
	const_iterator end() const;
	
	reverse_iterator rbegin();
	reverse_iterator rend();
	const_reverse_iterator  rbegin() const;
	const_reverse_iterator  rend() const;
	
};



#include "MutantStack.tpp"