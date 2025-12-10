/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/10 15:15:28 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "iostream"
#include "string"

#include <exception>
#include <algorithm>
#include <iterator>
#include <vector>



class Span
{
	private:
	unsigned int _N;
	std::vector<long long>_Numbers;
	

	public:
	Span(unsigned int Number);
	~Span();
	Span(const Span &object);
	Span& operator=(const Span &object);

	void addNumber(long long randNumber);
	long long shortestSpan();
	long long longestSpan();


	template <typename iterator>
	void addNumber(iterator begin, iterator end)
	{
		for(iterator it = begin; it != end ; it++)
		{
			if( _Numbers.size() >= _N)
				throw std::out_of_range("no more space left");
			_Numbers.push_back(*it);
		}
	};
	
};




