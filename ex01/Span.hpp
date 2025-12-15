/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:45 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/15 15:06:59 by poverbec         ###   ########.fr       */
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
	Span();
	Span(unsigned int Number);
	~Span();
	Span(const Span &object);
	Span& operator=(const Span &object);

	void addNumber(long long randNumber);
	long long shortestSpan();
	long long longestSpan();

	void addNumber(std::vector <long long > ::iterator begin, std::vector <long long > ::iterator end);
	
};




