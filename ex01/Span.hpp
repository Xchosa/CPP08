/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/08 18:20:59 by poverbec         ###   ########.fr       */
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

	void addNumber(unsigned int randNumber);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	
};




