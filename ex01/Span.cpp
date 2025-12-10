/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:38 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/10 15:12:50 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <exception>

#include <cstdlib>
#include <cmath>
#include <limits>
#include <vector> 
#include <algorithm>



Span::Span(unsigned int Number) : _N(Number)
{

}
Span::~Span()
{
}

Span::Span(const Span &object) : _N(object._N) , _Numbers(object._Numbers)
{
	
}

Span& Span::operator=(const Span &object)
{
	if(this != &object)
	{
		this->_N = object._N;
		this->_Numbers = object._Numbers;
		
	}
	return(*this);
};


void Span::addNumber(long long randNumber)
{
	if( _Numbers.size() >= _N)
		throw std::out_of_range("no more space left");
	
	_Numbers.push_back(randNumber);
}
// 5 10 2 -4 20 3
		
// O(n^n)
//long long Span::shortestSpan()
//{
//	if(_Numbers.empty())
//		throw std::logic_error("no values saved");
//	if(_Numbers.size() == 1)
//		throw std::logic_error("No Span found");
		
//	long long	Span =  std::numeric_limits<long long>::max();
//	long long	Span_tmp;
//	long long	Span_absolut;
//	long long	a;
//	long long	b;
	
//	for( size_t i = 0; i < _Numbers.size(); i++)
//	{
//		for (size_t j = i + 1; j < _Numbers.size(); j++)
//		{
//			a = _Numbers.at(i);
//			b = _Numbers.at(j);
//			Span_tmp = a -b;
//			Span_absolut = std::abs(Span_tmp);
			
//			if( Span_absolut < Span)
//				Span = Span_absolut;
//		}
//	}
//	return Span;
		
//}

long long Span::shortestSpan()
{
	if(_Numbers.empty())
		throw std::logic_error("no values saved");
	if(_Numbers.size() == 1)
		throw std::logic_error("No Span found");
		
	long long	Span =  std::numeric_limits<long long>::max();
	long long	Span_tmp;
	long long	Span_absolut;
	long long	a;
	long long	b;
	std::vector<long long> sortedContainer = _Numbers;
	std::sort( sortedContainer.begin(),sortedContainer.end());
	
	for( size_t i = 0; i < sortedContainer.size() -1 ; i++)
	{
		a = sortedContainer.at(i + 1);
		b = sortedContainer.at(i);
		Span_tmp = a -b;
		Span_absolut = std::abs(Span_tmp);
		
		if( Span_absolut < Span)
			Span = Span_absolut;
	}
	return Span;
		
}



long long Span::longestSpan()
{
	if(_Numbers.empty())
		throw std::logic_error("no values saved");
	if(_Numbers.size() == 1)
		throw std::logic_error("No Span found");
	
	// positions of the lowest and the max number 
	auto min_it = min_element(_Numbers.begin(),_Numbers.end());
	auto max_it = max_element(_Numbers.begin(),_Numbers.end());

	// without derefferencing i compare only the positions with each other
	auto absolut_span = std::abs(*max_it - *min_it);
	return absolut_span;
}
	

