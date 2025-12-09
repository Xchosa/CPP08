/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/09 17:51:33 by poverbec         ###   ########.fr       */
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
	std::vector<int>_Numbers;
	

	public:
	Span(unsigned int Number);
	~Span();
	Span(const Span &object);
	Span& operator=(const Span &object);

	void addNumber(unsigned int randNumber);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	
};




