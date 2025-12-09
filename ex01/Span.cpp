/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poverbec <poverbec@student.42heilbronn>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:45:38 by poverbec          #+#    #+#             */
/*   Updated: 2025/12/09 09:48:16 by poverbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <exception>

#include <cstdlib>
#include "Span.hpp"
#include <cmath>

Span::Span(unsigned int Number) : _N(Number)
{

}
Span::~Span()
{
	// automatically cleans up
}


void Span::addNumber(unsigned int randNumber)
{
	if( _Numbers.size() > _N)
		throw std::out_of_range("no more space left");
	
	_Numbers.insert(_Numbers.begin(), randNumber);
}
// 5 10 2 -4 20 3


unsigned int Span::shortestSpan()
{
	if(_Numbers.empty())
		throw std::empty("no values saved");
	if(_Numbers.size() == 1)
		throw std::empty("No Span found");
		
	long double	Span =  std::numeric_limits<long double>::max();
	long double	Span_tmp;
	long double Span_absolut;
	long double a;
	long double b;
	
	for( size_t i = 0; i < _Numbers.size(); i++)
	{
		for (size_t j = 1; j < _Numbers.size(); j++)
		{
			//if( i == _Numbers.size() -1)
			//	break;
			a = _Numbers.at(i);
			b = _Numbers.at(j);
			Span_tmp = a -b;
			Span_absolut = std::abs(Span_tmp);
			
			if( Span_absolut < Span)
				Span = Span_absolut;
		}
	}
	return Span;
		
}
//unsigned int Span::longestSpan()
//{
	
//}
	

